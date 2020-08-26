# Catatan C
![GitHub repo size](https://img.shields.io/github/repo-size/ace-id/catatan-c)
![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/ace-id/catatan-c)
![GitHub top language](https://img.shields.io/github/languages/top/ace-id/catatan-c)
![GitHub last commit](https://img.shields.io/github/last-commit/ace-id/catatan-c)
![GitHub](https://img.shields.io/github/license/ace-id/catatan-c)

Kumpulan source kode dalam bahasa C untuk pembelajaran dasar pemrograman dan aplikasi untuk penggunaan umum.

## Online Compiler
- [JDoodle](https://www.jdoodle.com/c-online-compiler/)
- [OnlineGDB](https://www.onlinegdb.com/online_c_compiler)
- [Programiz](https://www.programiz.com/c-programming/online-compiler/)
- [REPL](https://repl.it/languages/C)
- [Tutorials Point](https://www.tutorialspoint.com/compile_c_online.php)

## Visual Studio Code Settings

### :computer: Windows
[Download](https://github.com/GorvGoyl/MinGW64/releases) `MinGW64` jika belum ada, bahan bacaan [klik di sini](https://medium.com/@jerrygoyal/run-debug-intellisense-c-c-in-vscode-within-5-minutes-3ed956e059d6).

File seting di folder `.vscode`.

**launch.json**
```json
{
  "version": "0.2.0",
  "configurations": [
    {
      "name": "gcc.exe - Build and debug active file",
      "type": "cppdbg",
      "request": "launch",
      "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${workspaceFolder}",
      "environment": [],
      "externalConsole": false,
      "MIMode": "gdb",
      "miDebuggerPath": "C:\\MinGW64\\bin\\gdb.exe",
      "setupCommands": [
        {
          "description": "Enable pretty-printing for gdb",
          "text": "-enable-pretty-printing",
          "ignoreFailures": true
        }
      ],
      "preLaunchTask": "C/C++: gcc.exe build active file"
    }
  ]
}
```

**tasks.json**
```json
{
  "tasks": [
    {
      "type": "shell",
      "label": "C/C++: gcc.exe build active file",
      "command": "C:\\MinGW64\\bin\\gcc.exe",
      "args": [
        "-g",
        "${file}",
        "-o",
        "${fileDirname}\\${fileBasenameNoExtension}.exe"
      ],
      "options": {
        "cwd": "${workspaceFolder}"
      },
      "problemMatcher": [
        "$gcc"
      ],
      "group": {
        "kind": "build",
        "isDefault": true
      }
    }
  ],
  "version": "2.0.0"
}
```

### :computer: Linux
Download `gdb` jika belum ada, bahan bacaan [klik di sini](http://www.gdbtutorial.com/tutorial/how-install-gdb).
```
$ sudo apt-get update
$ sudo apt-get install gdb
```

File seting di folder `.vscode`.

**launch.json**
```json
{
  "version": "0.2.0",
  "configurations": [
    {
      "name": "gcc-8 - Build and debug active file",
      "type": "cppdbg",
      "request": "launch",
      "program": "${fileDirname}/${fileBasenameNoExtension}",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${workspaceFolder}",
      "environment": [],
      "externalConsole": false,
      "MIMode": "gdb",
      "setupCommands": [
        {
          "description": "Enable pretty-printing for gdb",
          "text": "-enable-pretty-printing",
          "ignoreFailures": true
        }
      ],
      "preLaunchTask": "C/C++: gcc-8 build active file",
      "miDebuggerPath": "/usr/bin/gdb"
    }
  ]
}
```

**task.json**
```json
{
  "tasks": [
    {
      "type": "shell",
      "label": "C/C++: gcc-8 build active file",
      "command": "/usr/bin/gcc-8",
      "args": [
        "-g",
        "${file}",
        "-o",
        "${fileDirname}/${fileBasenameNoExtension}"
      ],
      "options": {
        "cwd": "${workspaceFolder}"
      },
      "problemMatcher": [
        "$gcc"
      ],
      "group": {
        "kind": "build",
        "isDefault": true
      }
    }
  ],
  "version": "2.0.0"
}
```