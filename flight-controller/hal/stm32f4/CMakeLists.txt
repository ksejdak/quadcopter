set(SOURCES
    stm32f4_gpio.c
    stm32f4_gpio_functions.h
    stm32f4_nvic.c
    stm32f4_pwm.c
    stm32f4_rcc.c
    stm32f4_timer.c
    stm32f4_timer_irq.c
    stm32f4_uart.c
    stm32f4_uart_irq.c
)

# Needed by Drivers.
include_directories(CMSIS)

set(MODULES
    CMSIS
)

register_component()
