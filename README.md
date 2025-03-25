# Keylogger - C Implementation

This is a simple keylogger written in C that captures keystrokes and logs them into a file. It is designed for educational purposes to demonstrate how keyloggers work in C. The program runs in the background, logs keystrokes, and saves the input data to a log file.


## Features
- Captures all keystrokes, including special keys (Space, Enter, Tab, Escape, etc.)
- Saves keystrokes to a specified log file (`test-log.txt`)
- Runs in the background (hides the console window)
- Logs the start time of the keylogging session

## Requirements
- Windows OS
- C Compiler (e.g., GCC, MinGW)
- `<windows.h>`, `<conio.h>`, and `<time.h>` libraries

## Installation

1. Clone or download the repository:
   ```sh
   git clone https://github.com/BigyanKalakheti/Keylogger.git```
   
2. Compile the C code:
  ```sh
  gcc keylogger.c -o keylogger.exe```

3. Run the executable:
  ```sh
  ./keylogger.exe```
