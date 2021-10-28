from pyautogui import *
import pyautogui
import time
import keyboard
import random
import win32api, win32con

time.sleep(2)

def click(x,y):
    win32api.SetCursorPos((x,y))
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTDOWN,0,0)
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTUP,0,0)

# 160, 303, 630, 450
# 
while keyboard.is_pressed('c') == False:
    img = pyautogui.screenshot(region = (160, 303, 630, 450))
    width, height = img.size
    for x in range(0, width, 5):
        for y in range(0,height, 5):
            r,g,b = img.getpixel((x,y))

            if b == 195:
                click(x+160, y+303)
                time.sleep(0.05)
                break
