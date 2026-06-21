# Arithmetic Calculator in C 🧮

<p align="center">
  <img src="https://github.com/TScom-dew/calculatorProgram-using-c/actions/workflows/c-cpp.yml/badge.svg" alt="Build Status"/>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg?style=flat-square" alt="Language">
  <img src="https://img.shields.io/badge/License-MIT-green.svg?style=flat-square" alt="License">
  <img src="https://img.shields.io/github/last-commit/TScom-dew/calculatorProgram-using-c?style=flat-square" alt="Last Commit">
</p>

A robust, modular command-line calculator implemented in C. This project is designed to demonstrate clean code architecture, header-source separation, and advanced mathematical error handling.

---

## 🚀 Features

* **Arithmetic:** Basic operations (+, -, *, /, %) with operator precedence.
* **Advanced Math:** Power, Square Root, and Logarithm (base 10).
* **Trigonometry:** Sine, Cosine, Tangent, and their inverse functions (with automatic Degree/Radian conversion).
* **Robust Error Handling:** Division-by-zero protection, negative input sanitization for square roots/logs, and modular input validation.


---

## 🤖 CI/CD Status
This repository uses **GitHub Actions** to automate the build and testing process on every push to the `main` branch.

* **Automatic Compilation**: The code is compiled using `gcc` with `-Wall` to ensure no warnings or errors exist.
* **Automated Testing**: The program is executed automatically to verify stability and check for runtime errors.
* **Build Status**: Check the badge at the top of the repository or visit the **Actions** tab to see live build logs.


---


## 📁 Project Structure

| File | Description |
| :--- | :--- |
| `main.c` | Contains the main driver code and the interactive menu system. |
| `help.c` | Implementation of all arithmetic, trigonometric, and math logic. |
| `help.h` | Header file containing function declarations and operator enums. |
| `CMakeLists.txt` | Configuration file for building the project using CMake. |


---

## 🛠️ Technical Stack

* **Language:** C (Standard C11)
* **Build System:** [CMake](https://cmake.org/)
* **Architecture:** Modular design (`main.c`, `help.c`, `help.h`)
* **Input Handling:** Secure usage of `fgets` and `scanf` for crash-proof CLI interactions.


---

## 📦 Build and Run

### Prerequisites
* Ensure you have a C compiler (GCC/Clang) and [CMake](https://cmake.org/) installed.

### Clone the repository
```bash
git clone https://github.com/TScom-dew/calculatorProgram-using-c.git

cd calculatorProgram-using-c
```

### Build the project
```Bash
mkdir build && cd build
cmake ..
cmake --build .

```

### Run the application
```Bash
./calculator  # On Linux/macOS
.\calculator  # On Windows

```

---

## 🎓 Learning Outcomes
This project was developed to practice:

1. Modular Programming: Separating logic into header and source files for clean maintainability.
2. Build Automation: Leveraging CMake for platform-independent compilation.
3. Defensive Coding: Writing secure CLI applications that handle unexpected user input gracefully.



## 🤝 Contributing
Contributions are welcome! If you have ideas for new features or improvements, feel free to fork this repository and submit a pull request.


---


<p align="center">
Made with ❤️ by <a href="https://github.com/TScom-dew">TScom-dew</a>
</p>
<p align="center">
Happy Coding! ❤️
</p>
