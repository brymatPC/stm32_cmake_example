# CMake Cube Example
This repo is an example project evaluating the use of CMake on an STM32 microcontroller project.  The goal is to learn how the STM32 tools work with VS Code and Cmake.  A secondary goal is to try out different ways of integrating the YRShell project from ssanci into a STM32 project.

# Tools (Version Tested)
* Visual Studio Code (Latest)
* STM32 VS Code Extension (Latest)
* STM32 CubeMx (6.14.0)
* STM32 CLT (1.16.0)
    * NOTE: This contains the arm compiler
* CMake (3.30.0-rc4)

# Target Device(s)
* STM32 Nucleo-L476RG

# Project Setup
* Used CubeMx to generate basic IOC file for Nucleo board
* Used CubeMx to generate cmake project
* Used VS Code and STM32 Extension to import generated project
* Tweaked cmake files slightly for compilation
* Added C++ interface layer
* Added YRShell repo as git submodule
    * Also added alternative cmake compilation to clone and build YRShell as part of build process (Called "Remote")
* Other minor tweaks to IOC to enable DMA on serial port to test YRShell


# Notes
* cmake file for building "remote" yrshell is in "yrshell_remote/CMakeLists.txt"
    * Need to uncomment lines in top level CMakeLists.txt
* cmake file for building "local" yrshell is in "lib/YRShell/CMakeLists.txt"
* Git submodules take some getting used to, use this reference for help https://git-scm.com/book/en/v2/Git-Tools-Submodules
