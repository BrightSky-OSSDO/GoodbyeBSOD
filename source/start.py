"""
Copyright (c) 2023 - 2024 BrightSky OSSDO
This code is released under the MIT license
"""

from tkinter import Tk
from time import sleep

def flash_window():
    window = Tk()
    window.geometry("800x600")
    window.title("BSOD Prevention Protocol")
    window.after(100, lambda: window.destroy())
    window.mainloop()

# The following function stops the BSOD prevention protocol
def stop():
    print("Stopping BSOD prevention protocol...")
    sleep(3)
    print("Protocol stopped")