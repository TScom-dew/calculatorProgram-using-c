# Arithmetic Calculator in C

A modular command-line calculator implemented in C, focusing on clean code architecture and robust input handling.

## Overview
This project provides a functional interface for arithmetic, trigonometric, and logarithmic calculations. It is designed to demonstrate modular C programming, using header/source separation and safe input validation.

## Features
- **Arithmetic:** Basic operations (+, -, *, /, %)
- **Advanced Math:** Power, Square Root, and Logarithm (base 10)
- **Trigonometry:** Sine, Cosine, Tangent, and their inverse functions
- **Error Handling:** Division-by-zero checks and input validation

## Technical Implementation
- **Structure:** Modular design using `main.c`, `help.c`, and `help.h`.
- **Validation:** Uses `fgets` and `scanf` to prevent input-related crashes.
- **Build System:** Supports [CMake](https://cmake.org/) for cross-platform compilation.

## Build and Run

### Using CMake (Recommended)
```bash
# Create and enter build directory
mkdir build && cd build

# Configure and build
cmake ..
cmake --build .

# Run
.\calculator.exe   # Windows
./calculator       # Linux/macOS

```
### Learning Outcomes
- Understanding of header-source separation in C.
- Implementing CMake for build automation.
- Safe CLI input handling and logic modularity.


---

## Maintained by Ashlok Kumar [TScom-dew](https://github.com/TScom-dew/)
