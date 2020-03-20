project(
        'stm32f1',
        'cpp',
        'c',
        default_options: [
            'buildtype=minsize',
            'optimization=s',
            'strip=true',
            'cpp_std=c++17',
            'b_lto=false',
            'warning_level=3',
            'werror=true',
            'tune=true',
            ]
        )

stinfo = find_program('st-info')
stflash = find_program('st-flash')
objcopy = find_program('arm-none-eabi-objcopy')
size = find_program('arm-none-eabi-size')

srcfiles = [
        'main.cpp',
        'vectors.s',
        'reset.c',
        ]

add_project_arguments(
        '-mcpu=' + host_machine.cpu(),
        '-mtune=' + host_machine.cpu(),
        '-mthumb',
        '-mfpu=auto',                       # select the floating-point and Advanced SIMD instructions based on the settings of -mcpu and -march.
        '-fmerge-constants',                # merge same constants into one, saves space
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
        '-mcpu=' + host_machine.cpu(),
        '-mthumb',
        '-T' + meson.current_source_dir() + '/link.ld',
        '-nostartfiles',
        '-Wl,--print-memory-usage',
        '-ffunction-sections',
        '-fdata-sections',
        '-Wl,--gc-sections',
        language: ['cpp', 'c'],
        )


exe = executable(
        meson.project_name(),
        srcfiles,
        build_by_default: true,
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
