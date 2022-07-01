import random
import pyautogui
import time

if __name__=="__main__":
    print("moving mouse randomly to avoid station going to sleep mode")
    print("press ctrl-C to cancel...")

    while True:
        x = random.randint(-10, 10)
        y = random.randint(-10, 10)

        pyautogui.moveRel(x,y, duration=0.5)
        time.sleep(5)
