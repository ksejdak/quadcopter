macro(configure_drivers)
    configure_accelerometer()
    configure_barometer()
    configure_buzzer()
    configure_camera()
    configure_engine()
    configure_gyroscope()
    configure_lights()
    configure_magnetometer()
endmacro()

macro(configure_accelerometer)
    set(FLIGHTCONTROLLER_USE_ACCELEROMETER 1)

    #set(FLIGHTCONTROLLER_ACCELEROMETER_DEVICE "lsm303d")
    set(FLIGHTCONTROLLER_ACCELEROMETER_DEVICE "emulator")
endmacro()

macro(configure_barometer)
    set(FLIGHTCONTROLLER_USE_BAROMETER 1)

    #set(FLIGHTCONTROLLER_BAROMETER_DEVICE "lps25h")
    set(FLIGHTCONTROLLER_BAROMETER_DEVICE "emulator")
endmacro()

macro(configure_buzzer)
    set(FLIGHTCONTROLLER_USE_BUZZER 1)

    #set(FLIGHTCONTROLLER_BUZZER_DEVICE "common_buzzer")
    set(FLIGHTCONTROLLER_BUZZER_DEVICE "emulator")
endmacro()

macro(configure_camera)
    set(FLIGHTCONTROLLER_USE_CAMERA 1)

    #set(FLIGHTCONTROLLER_CAMERA_DEVICE "gopro_hero4")
    set(FLIGHTCONTROLLER_CAMERA_DEVICE "emulator")
endmacro()

macro(configure_engine)
    set(FLIGHTCONTROLLER_USE_ENGINES 0)

    set(FLIGHTCONTROLLER_ENGINES_DEVICE "afro_esc")
    #set(FLIGHTCONTROLLER_ENGINES_DEVICE "emulator")
endmacro()

macro(configure_gyroscope)
    set(FLIGHTCONTROLLER_USE_GYROSCOPE 1)

    #set(FLIGHTCONTROLLER_GYROSCOPE_DEVICE "l3gd20h")
    set(FLIGHTCONTROLLER_GYROSCOPE_DEVICE "emulator")
endmacro()

macro(configure_lights)
    set(FLIGHTCONTROLLER_USE_LIGHTS 1)

    set(FLIGHTCONTROLLER_LIGHTS_DEVICE "led")
    #set(FLIGHTCONTROLLER_LIGHTS_DEVICE "emulator")
endmacro()

macro(configure_magnetometer)
    set(FLIGHTCONTROLLER_USE_MAGNETOMETER 1)

    #set(FLIGHTCONTROLLER_MAGNETOMETER_DEVICE "lsm303d")
    set(FLIGHTCONTROLLER_MAGNETOMETER_DEVICE "emulator")
endmacro()
