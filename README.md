# GoodbyeBSOD
A simple tool to help prevent BSOD on Windows systems. So now you can say, "Goodbye, BSOD!"

A BSOD, short for Blue Screen Of Death, is every Windows user's worst nightmare. When a BSOD happens, the screen turns blue, and there is white text containing mostly just useless and obvious information. Sometimes the error codes can be helpful, but usually they are pointless.

However, GoodbyeBSOD aims to prevent BSOD from ever happening again.

# Does GoodbyeBSOD actually prevent BSOD?
Yes it does, for the most part.

When you run GoodbyeBSOD's executable, it enables the BSOD Prevention Protocol. The BSOD Prevention Protocol runs in the background for the rest of the Windows session, and detects if a BSOD is about to happen. If it does detect a BSOD about to happen, it immediately fixes the problem, stopping the BSOD from appearing.

GoodbyeBSOD only runs for the rest of the current Windows session. If you shut down or restart Windows through the power menu or Start menu, GoodbyeBSOD will have to be started manually again. However, simply closing your computer's lid will not stop GoodbyeBSOD; only shutting down Windows itself will.

But because GoodbyeBSOD must be manually started, it cannot prevent a BSOD from happening immediately upon booting.

# Build Instructions
GoodbyeBSOD can be built using MinGW.

Download the source code file (`GoodbyeBSOD.cpp`), and compile it into an executable using this command:

```
g++ -o GoodbyeBSOD GoodbyeBSOD.cpp
```

This will create an executable called `GoodbyeBSOD.exe` in the current directory.

Alternatively, you can download a pre-compiled executable from the repository's Releases page.

# Running
To run GoodbyeBSOD, just navigate to its directory and type its executable name in Windows Command Prompt. It will then activate the BSOD Prevention Protocol, and check for system issues and fix them if detected. As mentioned earlier, the BSOD Prevention Protocol will run in the background until you shut down Windows.

# License
GoodbyeBSOD is released under the MIT license.
