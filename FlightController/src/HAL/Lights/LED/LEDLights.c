//---------------------------------------------------------------------------------------------------------------
//
// Filename   : LEDLights.c
// Author     : Kuba Sejdak
// Created on : 12.08.2015
//
// This file is a part of SkyViper project.
//
// %LICENSE%
//
//---------------------------------------------------------------------------------------------------------------

#include "LEDLights.h"
#include "HAL/Lights/Lights.h"
#include "Platform/STM32Discovery/Drivers/GPIO.h"

void StrobeLightInit()
{
    GPIOConfig_t config;
    config.port = GPIO_PORT_A;
    config.pin = GPIO_PIN_5;
    config.function = PA9_USART1_TX;
    config.mode = GPIO_MODE_OUT;
    config.speed = GPIO_SPEED_50MHz;
    config.output_type = GPIO_OUTPUT_PUSHPULL;
    config.resistor_type = GPIO_RESISTOR_NONE;

    GPIOHandle_t tx_handle = GPIOInit(config);
}

void StrobeLightBlink()
{

}
