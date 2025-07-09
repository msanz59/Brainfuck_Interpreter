# Brainfuck Interpreter

This project is a simple Brainfuck interpreter written in C++.

## What is Brainfuck?

Brainfuck is an esoteric programming language created in 1993 by Urban Müller. It is known for its minimalistic design, consisting of only eight commands: `+`, `-`, `>`, `<`, `[`, `]`, `.` and `,`. Despite its simplicity, Brainfuck is Turing complete and can be used to write any computable program, though it is mainly used for educational or entertainment purposes due to its challenging syntax.

## How does this interpreter work?

This interpreter reads Brainfuck code from a string, maps the loop brackets for efficient execution, and processes the code using a memory array of 30,000 cells. It supports all standard Brainfuck commands, including input and output.

## Usage

1. Clone the repository.
2. Build the project using CMake:
 ```sh
   mkdir build cd build cmake .. make
   ```
3. Run the executable:

 ```sh
   ./Brainfuck_Interpreter
   ```
4. The Brainfuck code to interpret can be modified in `src/main.cpp`.

## Files

- `src/main.cpp`: Program entry point.
- `include/compilador.h`: Interpreter class definition.
- `src/compilador.cpp`: Interpreter class implementation.
- `CMakeLists.txt`: Build configuration.

## Example

The provided code in `main.cpp` will execute a Brainfuck program. You can replace the code string with any valid Brainfuck code.

---

Created by Miguel, 2025.