//=============================================================================================
//
// Filename   : lights.h
// Author     : Kuba Sejdak
// Created on : 12.08.2015
//
// This file is a part of SkyViper project.
//
// %LICENSE%
//
//=============================================================================================

#ifndef LIGHTS_H
#define LIGHTS_H

#include <stdbool.h>

//=============================================================================================
// STROBE LIGHT
//=============================================================================================

bool strobe_init();
void strobe_enable();
void strobe_disable();

void strobe_blink();

#endif
