//---------------------------------------------------------------------------------------------------------------
//
// Filename   : STDConsole.c
// Author     : Kuba Sejdak
// Created on : 22.07.2015
//
// This file is a part of SkyViper project.
//
// %LICENSE%
//
//---------------------------------------------------------------------------------------------------------------

#include "Platform/Console.h"

#include <stdio.h>
#include <stdarg.h>

bool console_init()
{
    // Mo need to initialize STD console.
    return true;
}

int console_write(const char *format, ... )
{
    va_list argptr;
    va_start(argptr, format);
    int ret = vfprintf(stderr, format, argptr);
    va_end(argptr);

    return ret;
}