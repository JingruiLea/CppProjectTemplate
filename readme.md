# VS Code + Cmake + CppUnit 搭建大型C++工程

本文介绍了以VS Code编辑器为核心, 用cmake编译, 配合gdb进行调试, cppunit进行单元测试的大型C++工程最佳实践. (配置环境为WSL, Ubuntu和MacOS)  
本文所有源码可在[Github](https://github.com/1079805974/CppProjectTemplate)下载.
## 工程概览
```text
├── bin
│   └── test
├── build
├── include
│   └── utils.h
├── make
├── readme.md
├── src
│   ├── main.cpp
│   └── utils.cpp
├── test
│   ├── CMakeLists.txt
│   ├── main.cpp
│   ├── test.h
│   └── utils_test.cpp
└── CMakeLists.txt
```
## CMakeLists.txt
CMake是一个跨平台的安装(编译)工具, 可以用简单的语句来描述所有平台的安装(编译过程).

Ubuntu下安装 :  
```bash
sudo apt-get install cmake
```
MacOS:
```bash
brew install cmake
```