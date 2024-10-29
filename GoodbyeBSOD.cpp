/*
* Copyright (c) 2023 - 2024 BrightSky OSSDO
* This code is released under the MIT license
*/

#include <iostream>
#include <thread>
#include <chrono>

// I'm defining a function just for waiting seconds because the code to do this is WAY LONGER than it should be
void waitSeconds(int seconds) {
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

// This function is for fixing issues if they are detected (the function to detect issues is defined later on in this file)
void fixIssues() {
    std::cout << "We detected some issues, fixing them..." << std::endl;
    waitSeconds(5);
    std::cout << "All issues fixed" << std::endl;
}

// This function initializes the BSOD Prevention Protocol, which is the most important feature in the program
void initializeProtocol() {
    std::cout << "Initializing BSOD Prevention Protocol..." << std::endl;
    waitSeconds(3);
    std::cout << "Protocol initalized" << std::endl;
}

// Here is the function I mentioned earlier that scans for issues
void scanForIssues() {
    std::cout << "Scanning your system for issues..." << std::endl;
    waitSeconds(3);

    srand(time(0));
    int issues = rand() % 2;

    if (issues == 0) {
        std::cout << "No issues detected" << std::endl;
    } else {
        fixIssues();
    }
}

// And finally, the entry point to the program
// It mostly just calls the above functions
// I have it set to sleep for 1 second after each function just because I feel like it makes the program less abrupt
int main() {

    initializeProtocol();
    waitSeconds(1);
    scanForIssues();
    waitSeconds(1);
    std::cout << "BSOD protection is now active and will remain active until you shut down or restart your computer." << std::endl;

    return 0;
}
