# GoodbyeBSOD
A simple tool to help prevent BSOD on Windows systems. So now you can say, "Goodbye, BSOD!"

A BSOD, short for Blue Screen Of Death, is every Windows user's worst nightmare. When a BSOD happens, the screen turns blue, and there is white text containing mostly just useless and obvious information. Sometimes the error codes can be helpful, but usually they are pointless. Common causes of the BSOD include overheating, corrupted system files, and an inaccessible boot device.

However, GoodbyeBSOD aims to prevent BSOD from ever happening again.

# Does GoodbyeBSOD actually prevent BSOD?
Yes it does!

When you run GoodbyeBSOD's executable, it enables the BSOD Prevention Protocol. The BSOD Prevention Protocol runs in the background until you stop it, and detects if a BSOD is about to happen. If it does detect a BSOD about to happen, it immediately fixes the problem, stopping the BSOD from appearing.

If you run GoodbyeBSOD and then shut down or restart your computer, the BSOD Prevention Protocol will be started again automatically and be able to catch BSODs that happen during booting (such as inaccessible boot device).

# Build Instructions
GoodbyeBSOD uses C and Python, so it can be built using MinGW and PyInstaller. A build script (`build.bat`) is provided in the root of this repository, so you can run it to automatically build GoodbyeBSOD. Running the script will create the executable itself, along with two DLL files that are required for running GoodbyeBSOD.
Please keep the DLLs in the same directory as the executable, otherwise the program won't run.

The DLLs and executable will be placed in a folder called `dist`.

Alternatively, you can download a .7z archive containing the prebuilt executable and DLLs from the repository's Releases page.

# Running
To run GoodbyeBSOD, just navigate to its directory and type its executable name in Windows Command Prompt. It will then activate the BSOD Prevention Protocol, and check for system issues and fix them if detected. As mentioned earlier, the BSOD Prevention Protocol will run in the background and automatically run itself at all times, both when your computer is booting and when you're using it. In other words, it is persistent.

GoodbyeBSOD only uses about 69 KB of memory in the background, so it's very lightweight.

To stop GoodbyeBSOD, run its executable followed by "stop" (case-insensitive). For example: `GoodbyeBSOD.exe stop`

# License
GoodbyeBSOD is released under the MIT license.
