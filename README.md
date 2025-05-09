# CPU-80386-cpp

<br>

## Intel 80386 PC emulator

<br>

install SDL2

<pre>
sudo apt-get install build-essential cmake clang-format libsdl2-dev libsdl2-image-dev libsdl2-mixer-dev libsdl2-net-dev libsdl2-ttf-dev
</pre>

<br><br><br>

boot Linux

<br><br><br>

### WIP

https://user-images.githubusercontent.com/10168979/177424985-9e91d420-b6b8-4e00-8db4-0dbcb3d3b295.mp4

![ss](https://user-images.githubusercontent.com/10168979/177425392-062bc70e-73c5-4fb4-a054-42669a44c054.png)

use JSLinux as a reference

<br>

### No SDL2
SDL omitted. Uses terminal window for character I/O.

Compile on Cygwin/ Linos/ Macos:

```bash
cmake -DNO_SDL=ON -G "Unix Makefiles" .
make
```

Compile on Winos:

```bash
cmake -DNO_SDL=ON -G "NMake Makefiles" .
make
```

Add `-DCMAKE_BUILD_TYPE=Debug` to CMake command to compile for debugging.

Run:

```bash
# boot Linux
exe/cpp_app
```

<br>

Enter shell commands at prompt after Linux boot sequence. Ctrl-C terminates Linux. Run `stty -icanon -echo` to enable character mode and turn off echo for common tty behaviour.

<br><br><br><br><br><br>

## Intel 8086 version

[8086 PC emulator](https://github.com/kxkx5150/CPU-8086-cpp)

<br>

## Zilog Z80 version

[MSX1 Emulator](https://github.com/kxkx5150/CPU-Z80-cpp)

<br>

## MOS 6502 version

[Apple II Emulator](https://github.com/kxkx5150/CPU-6502-cpp)  
[NES (ファミコン) Emulator](https://github.com/kxkx5150/Famicom-cpp)  

<br>

## CHIP-8

[CHIP8 Emulator](https://github.com/kxkx5150/CPU-CHIP8-cpp)  


<br><br><br><br><br><br>

vscode extensions

<pre>
    C/C++
    C/C++ Extension Pack
    Better C++ Syntax
    CMake
    CMake Tools
    CodeLLDB
    Makefile Tools
    IntelliCode
    clangd
</pre>

<br><br><br>

(Ctrl + Shift + p)  
CMake: Configure

<br><br><br>

### F7

Build

<br>

### F5

debug

<br><br><br>
