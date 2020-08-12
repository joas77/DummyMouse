# DummyMouse
Simple script to keep my mac awake, just running a random walk with the mouse

## Python implementation

### Requirements
* python 3.7+ (maybe any python 3.x is enough, I'm using python 3.7.3)
* pyautogui python library.

### Execution
`python mouse_mov.py`

## C++ Implementation

Implementation in C++ for macOS.
Low level drivers for mouse controlling is in repo https://github.com/voidloop/emumice.
Thanks to https://github.com/voidloop.
I just modified main.cpp to randomly move the mouse.

## Requirements
* macOS Catalina version 10.15.x (not tested in previous versions)

### Execution
`cd cppImp/emumice`

`make`

`/.emumice`
