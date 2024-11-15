/*
* Copyright (c) 2023 - 2024 BrightSky OSSDO
* This code is released under the MIT license
*/

// This file was originally gonna be in C++ but ctypes was being EXTREMELY DEFIANT and wouldn't load it, so I had to rewrite it in C

#include <stdio.h>
#include <unistd.h>

void initializeProtocol() {
    printf("Initializing BSOD prevention protocol...\n");
    sleep(3);
    printf("Protocol initialized\n");
}