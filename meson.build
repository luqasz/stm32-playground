project(
        'stm32f1',
        'cpp',
        default_options: [
            'buildtype=minsize',
            'optimization=s',
            'strip=true',
            'cpp_std=c++17',
            'b_lto=false',
            'warning_level=3',
            ]
        )

stinfo = find_program('st-info')
stflash = find_program('st-flash')
objcopy = find_program('arm-none-eabi-objcopy')
size = find_program('arm-none-eabi-size')

srcfiles = ['main.cpp']

add_project_arguments(
        '-mcpu=' + host_machine.cpu(),
        '-mthumb',
        '-fno-exceptions',
        '-Werror',
        '-Wconversion',
        '-Wsign-conversion',
        '-Wfloat-conversion',
        '-Woverloaded-virtual',
        '-fno-exceptions',
        '-fno-asynchronous-unwind-tables',
        '-fno-rtti',
        '-ffunction-sections',
        '-fdata-sections',
        language: 'cpp',
        )

add_project_link_arguments(
        '-mcpu=' + host_machine.cpu(),
        '-mthumb',
        '-T' + meson.current_source_dir() + '/link.ld',
        '-nostartfiles',
        '-ffunction-sections',
        '-fdata-sections',
        '-Wl,--gc-sections',
        language: 'cpp',
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
            stflash, 'write',
            exe.full_path() + '.bin',
            '0x08000000'
            ],
        depends: bin,
        )