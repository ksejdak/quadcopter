set(SOURCES
    ${APP_NAME}.c
)

register_executable()

link_target(${FLIGHTCONTROLLER_BOARD_PATH})
link_target(${FLIGHTCONTROLLER_CORE_PATH}/controller)
