project(
        'stm32f1',
        'cpp',
        'c',
        default_options: [
            'buildtype=debug',
            'optimization=0',
            'strip=true',
            'cpp_std=c++17',
            'b_lto=false',
            'warning_level=3',
            'werror=true',
            ]
        )

stinfo = find_program('st-info')
stflash = find_program('st-flash')
objcopy = find_program('objcopy')
size = find_program('size')

srcfiles = [
        'main.cpp',
        'vectors.c',
        'reset.s',
        ]

add_project_arguments(
        '-fmerge-constants',
        '-Wconversion',
        '-Wsign-conversion',
        '-Wfloat-conversion',
        '-fno-asynchronous-unwind-tables',
        '-ffunction-sections',
        '-fdata-sections',
        language: ['cpp', 'c'],
        )

add_project_arguments(
        '-fno-exceptions',
        '-Woverloaded-virtual',
        '-fno-exceptions',
        '-fno-rtti',
        language: ['cpp'],
        )

add_project_link_arguments(
        '-nostartfiles',
        '-Wl,--print-memory-usage',
        '-ffunction-sections',
        '-fdata-sections',
        '-Wl,--gc-sections',
        language: ['cpp', 'c'],
        )

linker_script_flags = []
linker_script_deps = []

foreach entry : meson.get_cross_property('linker_paths', [''])
    if entry != ''
        linker_script_flags += '-L' + meson.source_root() / entry
    endif
endforeach

foreach entry : meson.get_cross_property('linker_scripts', [''])
    if entry != ''
        linker_script_flags += '-T' + entry
    endif
endforeach

foreach entry : meson.get_cross_property('link_depends', [''])
    if entry != ''
        linker_script_deps += meson.source_root() / entry
    endif
endforeach


exe = executable(
        meson.project_name(),
        srcfiles,
        build_by_default: true,
        link_args: [
            linker_script_flags,
        ],
        link_depends: linker_script_deps,
        )

bin = custom_target(
        'bin',
        capture: true,
        command: [
            objcopy, [
                '-Obinary',
                exe.full_path(),
                exe.full_path() + '.bin',
                ]
            ],
        depends: exe,
        output: 'bin'
        )

run_target(
        'size',
        command: [
            size,
            exe.full_path(),
            '-B',
            ],
        depends: exe,
        )

run_target(
        'flash',
        command: [
            stflash,
            '--reset',
            'write',
            exe.full_path() + '.bin',
            '0x08000000'
            ],
        depends: bin,
        )
