/*
* Copyright (c) 2023 - 2024 BrightSky OSSDO
* This code is released under the MIT license
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void fixIssues() {
    printf("We detected some issues, fixing them...\n");
    sleep(5);
    printf("All issues fixed\n");
}

void detectIssues() {
    printf("Scanning your system for issues...\n");
    sleep(3);

    int issues;
    srand(time(NULL));
    issues = rand() % 2;

    if (issues == 0) {
        printf("No issues detected\n");
    } else {
        fixIssues();
    }
}