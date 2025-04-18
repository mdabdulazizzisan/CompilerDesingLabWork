# Compiler Design Lab Project

This repository contains my work for the Compiler Design Lab course. The project demonstrates the progressive development of a compiler through various lab assignments, culminating in a final integrated compiler program.

## Project Overview

This project implements different phases of a compiler:
- Lexical Analysis (Scanner/Tokenizer)
- Syntax Analysis (Parser)
- Semantic Analysis
- Intermediate Code Generation
- Code Optimization
- Code Generation

Each lab session builds upon previous work, implementing a specific phase of the compiler design process.

## Repository Structure

Each file in this repository corresponds to a specific lab assignment:

- **Lab 1**: Introduction to compiler design concepts
- **Lab 2**: Lexical analysis implementation
- **Lab 3**: Parser implementation
- **Lab 4**: Semantic analysis
- **Lab 5**: Intermediate code generation
- **Lab 6**: Code optimization techniques
- **Lab 7**: Code generation
- **Main Program**: Integration of all components into a complete compiler

## Main Program

The main function in this project combines all previous lab work into a single integrated compiler. It demonstrates the complete pipeline from source code input to executable code output, showcasing:

1. Tokenizing input source code
2. Parsing tokens into an abstract syntax tree
3. Performing semantic analysis on the tree
4. Generating intermediate code
5. Applying optimization techniques
6. Producing target code

## Getting Started

### Prerequisites

- C/C++ compiler (GCC, Clang, or MSVC)
- CMake (version 3.10 or higher)
- Basic understanding of compiler design concepts

### Building the Project

```bash
# Clone the repository
git clone https://github.com/yourusername/CompilerDesignLab.git
cd CompilerDesignLab

# Build using CMake
mkdir build
cd build
cmake ..
make
```

### Running the Compiler

```bash
# Run the main program
./compiler path/to/source_file.ext
```

## Example Usage

```bash
# Example: Compiling a simple source file
./compiler examples/hello.c

# The compiler will output each stage of compilation:
# - Tokens from lexical analysis
# - Parse tree from syntax analysis
# - Intermediate representation
# - Optimized code
# - Target code
```

## Learning Outcomes

Through this project, I've learned:
- How compilers break down complex language constructs
- Implementation techniques for each phase of compilation
- How the different phases of a compiler work together
- Common optimization techniques used in modern compilers
- Practical experience with compiler development tools and techniques

## Acknowledgements

- Course instructor and TAs for their guidance
- References to compiler design textbooks and resources used

## License

This project is for educational purposes. Please respect academic integrity policies when using this code.
