# Arithmetic Calculator in C 🧮

<p align="center">
  <img src="https://github.com/TScom-dew/calculatorProgram-using-c/actions/workflows/c-cpp.yml/badge.svg" alt="Build Status"/>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg?style=flat-square" alt="Language">
  <img src="https://img.shields.io/badge/License-MIT-green.svg?style=flat-square" alt="License">
  <img src="https://img.shields.io/github/last-commit/TScom-dew/calculatorProgram-using-c?style=flat-square" alt="Last Commit">
</p>

A robust, modular command-line calculator implemented in C. This project demonstrates clean code architecture, header-source separation, and error handling.

---

## 🚀 Features

* **Arithmetic Operations:** Basic math (+, -, *, /, %) with operator precedence.
* **Advanced Math:** Power, Square Root, and Logarithm (base 10).
* **Trigonometry:** Sine, Cosine, Tangent, and their inverse functions.
* **Robust Error Handling:** Division-by-zero protection, invalid input sanitization, and overflow prevention.

## 🛠️ Technical Stack

* **Language:** C (Standard C11)
* **Build System:** [CMake](https://cmake.org/)
* **Architecture:** Modular design (`main.c`, `help.c`, `help.h`)
* **Input Handling:** Secure usage of `fgets` and `scanf` for crash prevention.

## 📦 Build and Run

### Prerequisites
* Ensure you have a C compiler (GCC/Clang) and [CMake](https://cmake.org/) installed.

### Using CMake (Recommended)
```bash
# Clone the repository
git clone [https://github.com/TScom-dew/calculatorProgram-using-c.git](https://github.com/TScom-dew/calculatorProgram-using-c.git)
cd calculatorProgram-using-c

# Build the project
mkdir build && cd build
cmake ..
cmake --build .

# Run the application
./calculator  # On Linux/macOS
.\calculator  # On Windows
