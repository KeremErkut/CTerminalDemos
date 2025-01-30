# CTerminalDemos 🚀

**CTerminalDemos** is a collection of 4 C programs that showcase various terminal effects such as colorful text, animated names, a starfield animation, and sine wave patterns! 🎨✨

## Table of Contents 📚

1. [Red Text Output 🔴](RedText.c)
2. [Animated Name ✨](#2-animated-name)
3. [Starfield Effect 🌌](#3-starfield-effect)
4. [Sine Wave Pattern 🌊](#4-sine-wave-pattern)

---

## 1. Red Text Output 🔴

This program demonstrates how to print red text in the terminal using ANSI escape codes. The message **"Hello World, This is RED!"** is displayed in a bold red color.

### How it works:
- The program uses the escape code `\033[1;31m` to change the text color to bold red.
- `\033[0m` is used to reset the text color back to the default after printing the message.

This simple effect highlights how you can manipulate terminal text styling to make outputs more visually engaging.

**File**: `RedText.c`

---

## 2. Animated Name ✨

In this program, the name **"Kerem"** is animated, moving across the screen from left to right. The animation creates a dynamic, fluid effect by clearing the screen and updating the position of the name at regular intervals.

### How it works:
- The program uses `\033[H\033[J` to clear the terminal screen before printing each frame.
- The program loops through 20 iterations, printing the name **"Kerem"** with an increasing number of spaces before it, which makes it appear to move from left to right.
- The `usleep(100000)` function ensures there is a slight delay between each frame, creating a smooth animation effect.

**File**: `AnimatedName.c`

---

## 3. Starfield Effect 🌌

This program simulates a classic starfield animation where stars appear and move across the screen. The stars are randomly generated at different positions and continuously move, creating a mesmerizing space-like effect.

### How it works:
- The program initializes an array of `Star` structures, each holding `x` and `y` coordinates.
- Using the `rand()` function, the stars are positioned randomly within the terminal's width and height.
- In an infinite loop, the program moves each star one step to the right by updating its `x` coordinate. When the star reaches the end of the screen, it wraps around to the beginning.

The use of `\033[%d;%dH` places each star at its specific `x` and `y` coordinates in the terminal.

**File**: `Starfield.c`

---

## 4. Sine Wave Pattern 🌊

In this program, a sine wave pattern is drawn on the terminal. The wave moves dynamically, and the position of the sine wave is calculated using the sine function, creating a smooth and flowing motion.

### How it works:
- The program calculates the `y` position of each wave point using the `sin()` function. The `x` positions are simply the columns of the terminal.
- The sine wave is drawn by checking if the `y` position matches the calculated sine value for each `x` column. If it does, an asterisk `*` is printed; otherwise, a space is printed.
- The wave moves over time by incrementing the phase of the sine function, creating the effect of the wave oscillating.

**File**: `SineWave.c`

---

## Usage 💻

To run this project, follow these steps:

1. **Clone the repository**:
    - Open your terminal and run the following command to clone the repo:
      ```
      git clone https://github.com/<username>/CTerminalDemos.git
      cd CTerminalDemos
      ```

2. **Compile and run the code**:
    - Use a C compiler (like GCC) to compile and run the programs:
      - To compile and run the red text program:
        ```
        gcc RedText.c -o RedText
        ./RedText
        ```
      - To compile and run the animated name program:
        ```
        gcc AnimatedName.c -o AnimatedName
        ./AnimatedName
        ```
      - Similarly, compile and run the other programs (`Starfield.c` and `SineWave.c`).

3. **Enjoy the effects!** 🎉

---

## Requirements ⚙️

- A C compiler (such as GCC).
- A terminal that supports ANSI escape codes (works on Linux, macOS, or Windows with WSL).

---

## Contributing 🤝

This repository is open-source! Feel free to fork, clone, and make a **pull request** with your improvements or ideas. We'd love to see your contributions! 🌟

---

Enjoy exploring the terminal effects! 🌈✨
