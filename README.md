# Lab 13 – Files and Command-Line Arguments  
This folder contains solved problems from Lab 13 of the "Programming Fundamentals" course.  

## Topics Covered  
- File operations in C: `fopen`, `fclose`, `fscanf`, `fprintf`  
- Command-line arguments: `argc`, `argv`, `env`  
- Wildcards in shell (`*`, `?`) and command-line argument expansion  
- Reading and writing text/binary files  
- Writing modular code using functions for:  
  - Reading from files  
  - Writing to files  
  - Processing data using vectors and matrices  
- String parsing and processing from command line  
- Handling standard input/output as files  

## Problems  

### Part 1 – Basic File Operations  
#### Problem 1.1 – Write and Read from File  
- Read filename and student name from keyboard  
- Write both to a file, then read and display the content  

#### Problem 1.2 – Vector Sum to File  
- Read up to 20 integers from `stdin`  
- Compute their sum  
- Write result to a file specified in command-line arguments  
- Use custom functions for I/O and sum  

### Part 2 – Command-Line and File-Based Operations  
#### Problem 2.1 – Display File Content  
- Print contents of a file given as command-line argument  

#### Problem 2.2 – Concatenate All `.c` Files  
- Concatenate all `.c` files from current directory into `final.c`  
- Usage:  
  ```bash
  ./p1 *.c
#### Problem 2.3 – General File Concatenation

  - Multiple usage cases based on number of arguments:

        0 args: copy from stdin to stdout

        1 arg: write from stdin to file

        2 args: copy file1 to file2

        ≥ 3 args: concatenate file1, file2, ..., fileN-1 into fileN

#### Problem 2.4 – Store and Display Real Numbers

  - Read N real numbers from keyboard

  - Store 2 per line in a file specified in arguments

  - Then display all numbers (one per line) from file

#### Problem 2.5 – Partial Line Printing (tail)

  - Implement tail functionality with line ranges

  - Examples:
```bash
./tail       # All lines  
./tail 5-    # From line 5 to end  
./tail -10   # First 10 lines  
./tail 2-8   # Lines 2 through 8
```
### Part 3 – Applied File Processing
#### Problem 3.1 – Temperature Report

  - Read daily temperatures from a file (≤31 days, one month)

  - Compute:

      - Minimum, maximum, average

      - Geometric mean of absolute values

  - Write formatted report to raport.dat

#### Problem 3.2 – Sort and Log Vectors

  - Read up to 30 integers from file

  - Sort using bubble sort

  - Save both original and sorted vectors to output file

#### Problem 3.3 – Dwarves’ Inventory Management

  - Read from PITICI.IN:

    - Work pay/day

    - Stock + order matrix for n dwarves × m products

    - Product prices

  - Compute:

    - Final stock per dwarf

    - Total payment owed per dwarf

    - Number of days to repay (real and rounded)

- Output report in PITICI.OUT, echo input to screen

### Part 4 – Inventory and Matrix Norms
#### Problem 4.1 – Trioda Inventory Report

  - Read stock and prices from trioda.dat

  - Compute:

    - Total stock and value per store

    - Value increase after price growth (given %)

  - Display inventory report on screen

#### Problem 4.2 – Matrix Norms

  - Read real-valued matrix from matriceIn.dat

  - Compute norms:

    - Max row sum

    - Max column sum

    - Frobenius norm

  - Let user select computation via menu

#### Problem 4.3 – Altitude Peak Detection

  - Read 2D terrain matrix from file (arg1)

  - Output coordinates of local peaks to another file (arg2)

    - A "peak" is higher than all its neighbors

## Build Instructions  
To compile and link programs involving files and command-line arguments:  
```bash
clang -Wall -c fileUtils.c    # If you have utility functions for file operations
clang -Wall -c main.c         # Main program
clang fileUtils.o main.o -o output
```
- If everything is in a single file (e.g., main.c only):
```bash
clang -Wall main.c -o output
```
## Build with `makefile`

- To build the project (if a Makefile is present):
```bash
make
```
- To clean up build files:
```bash
make clean
```
