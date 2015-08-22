//---------------------------------------------------------------------------------------------------------------
//
// Filename   : gpio.h
// Author     : Kuba Sejdak
// Created on : 11.08.2015
//
// This file is a part of SkyViper project.
//
// %LICENSE%
//
//---------------------------------------------------------------------------------------------------------------

#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>
#include <stdbool.h>

//---------------------------------------------------------------------------------------------------------------
// BASIC PIN CONFIGURATION
//---------------------------------------------------------------------------------------------------------------

typedef uint32_t GPIOPort_t;
typedef uint32_t GPIOPin_t;

// Pin mode.
typedef enum
{
    GPIO_DIRECTION_IN,
    GPIO_DIRECTION_OUT,
} GPIODirection_t;

// Pullup/pulldown resistors.
typedef enum
{
    GPIO_RESISTOR_NONE,
    GPIO_RESISTOR_PULLUP,
    GPIO_RESISTOR_PULLDOWN
} GPIOResistorType_t;

// Pin configuration structure.
typedef struct
{
    GPIODirection_t direction;
    GPIOResistorType_t resistor_type;
} GPIOConfig_t;

// Pin handle.
typedef struct
{
    GPIOPort_t port;
    GPIOPin_t pin;
} GPIOHandle_t;

void gpio_deactivate(GPIOHandle_t handle);

bool gpio_readPin(GPIOHandle_t handle);
uint16_t gpio_readPort(GPIOPort_t port);

bool gpio_writePin(GPIOHandle_t handle, bool value);
bool gpio_writePort(GPIOPort_t port, uint16_t value);

void gpio_pinConfigLock(GPIOHandle_t handle);

#endif