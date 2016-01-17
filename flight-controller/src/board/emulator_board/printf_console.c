//=============================================================================================
//
// Filename   : printf_console.c
// Author     : Kuba Sejdak
// Created on : 04.01.2016
//
// This file is a part of SkyViper project.
//
// %LICENSE%
//
//=============================================================================================

#include "printf_console.h"
#include "emulator_board_pinout.h"
#include "hal/emulator_hal/network_uart.h"

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#define CONSOLE_BUFFER_SIZE     1024

static UARTHandle_t uart_handle;
static bool network_console = false;
static bool console_initialized = false;

bool console_init()
{
    // Try to init network console first.
    Emulator_UARTConfig_t uart_config;
    strcpy((char *) uart_config.ip, NETWORK_CONSOLE_IP);
    uart_config.port = NETWORK_CONSOLE_PORT;
    uart_config.protocol = NETWORK_CONSOLE_PROTOCOL;

    network_console = emulator_uartInit(&uart_handle, &uart_config);
    console_initialized = true;

    console_write("\n");
    if(!network_console) {
        console_write("console: Failed to init network console [%s %s:%d].", (NETWORK_CONSOLE_PROTOCOL == UART_CONNECTION_TCP) ? "tcp" : "udp", NETWORK_CONSOLE_IP, NETWORK_CONSOLE_PORT);
        console_write("Using local stdout\n");
    }
    else
        uart_activate(&uart_handle);

    return console_initialized;
}

int console_write(const char *format, ...)
{
    if(!console_initialized)
        return -1;

    int i = 0;
    va_list args;
    va_start(args, format);

    if(network_console) {
        char buffer[CONSOLE_BUFFER_SIZE];
        vsprintf(buffer, format, args);

        for(i = 0; buffer[i]; ++i)
            uart_send(&uart_handle, buffer[i]);
    }
    else {
        i = vprintf(format, args);
        fflush(stdout);
    }

    va_end(args);
    return i;
}
