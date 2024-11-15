"""
Copyright (c) 2023 - 2024 BrightSky OSSDO
This code is released under the MIT license
"""

# This file is the entry point of GoodbyeBSOD

from sys import argv
from ctypes import CDLL
from time import sleep
from source.start import flash_window, stop

def main():
    protocol = CDLL("./protocol.dll")
    start_protocol = protocol.initializeProtocol
    start_protocol.restype = None

    issue_detector = CDLL("./issue_detector.dll")
    detect_issues = issue_detector.detectIssues
    detect_issues.restype = None

    start_protocol()
    sleep(1)
    detect_issues()
    sleep(1)
    flash_window()
    print("BSOD protection is now active and will remain active until you run the command to stop it.")


if __name__ == "__main__":
    if len(argv) > 1 and argv[1].lower() == "stop":
        stop()
    else:
        main()