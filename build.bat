pyinstaller --onefile GoodbyeBSOD.py
gcc -shared -o dist\protocol.dll source\protocol.c
gcc -shared -o dist\issue_detector.dll source\issue_detector.c