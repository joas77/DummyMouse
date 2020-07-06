import random
import pyautogui

if __name__=="__main__":
    print("moving mouse randomly to avoid station going to sleep mode")
    print("press ctrl-C to cancel...")

    while True:
        x = random.randint(-100, 100)
        y = random.randint(-100, 100)

        pyautogui.moveRel(x,y, duration=0.5)
