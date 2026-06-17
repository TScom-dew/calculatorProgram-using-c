#  Minimum version
cmake_minimum_required(VERSION 3.10)

#  Project ka naam
project(ArithmeticCalculator VERSION 1.0)

# C standard setting  (C11 ya C99)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

#  Executable file defining 
# Agar files badhe toh yahan add karte jao
add_executable(calculator main.c help.c)

# Math library linking 
target_link_libraries(calculator m)
