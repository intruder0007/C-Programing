# C Programming Learning Path - Resume Boost Guide

A comprehensive guide to mastering C programming concepts that will strengthen your resume.

## Project Structure

```
01_fundamentals.c          - Core language fundamentals
02_memory_pointers.c       - Memory management and pointers
03_data_structures.c       - Data structures and algorithms
04_system_programming.c    - System programming concepts
05_build_and_debug.c       - Debugging and build tools
Makefile                   - Build automation (demonstrates best practices)
README.md                  - This file
```

---

## 1. CORE LANGUAGE FUNDAMENTALS

**What to Learn:**
- Variables and data types (int, float, char, arrays, structs)
- Operators (arithmetic, logical, bitwise, comparison)
- Control flow (if/else, switch, loops)
- Functions and function pointers
- Arrays and strings

**File:** `01_fundamentals.c`

**Key Concepts:**
```c
- Data types: int, float, double, char, bool
- Arrays and multidimensional arrays
- Structures and unions
- Enums for named constants
- Function declarations and definitions
- Function pointers for callbacks
- String handling (arrays of chars)
```

**Resume Impact:**
- Show understanding of C's type system
- Demonstrate control flow mastery
- Function pointers show advanced knowledge

**Practice Exercise:**
1. Create a calculator with function pointers for operations
2. Write a struct-based contact management system
3. Implement string manipulation functions

---

## 2. MEMORY MANAGEMENT & POINTERS

**What to Learn:**
- Pointers and dereferencing
- Pointer arithmetic
- Dynamic memory allocation (malloc, calloc, realloc)
- Memory deallocation (free)
- Memory leak prevention
- Stack vs heap

**File:** `02_memory_pointers.c`

**Key Concepts:**
```c
- & (address-of) operator
- * (dereference) operator
- malloc() / calloc() / realloc() / free()
- Null pointers
- Pointer to pointer (**ptr)
- Memory safety
```

**Resume Impact:**
- Pointers are critical in C; mastery is essential
- Shows you understand memory management
- Crucial for systems programming roles

**Practice Exercise:**
1. Create a dynamic array implementation
2. Write functions to detect memory leaks
3. Implement custom memory allocators
4. Practice pointer swapping and manipulation

---

## 3. DATA STRUCTURES & ALGORITHMS

**What to Learn:**
- Linked lists, stacks, queues
- Trees and hash tables
- Sorting algorithms (bubble, quick, merge sort)
- Searching algorithms (linear, binary)
- Time/Space complexity analysis (Big-O notation)

**File:** `03_data_structures.c`

**Key Concepts:**
```c
- Node-based structures (typedef struct with pointers)
- Stack operations: push, pop
- Queue operations: enqueue, dequeue
- Sorting: O(n²) bubble sort, O(n log n) quick sort
- Searching: O(n) linear, O(log n) binary
- Space-time tradeoffs
```

**Resume Impact:**
- Essential for interviews and system design
- Shows algorithmic thinking
- Critical for optimization roles

**Practice Exercise:**
1. Implement binary search tree (BST)
2. Implement hash table with collision handling
3. Implement merge sort recursively
4. Build a priority queue using arrays

---

## 4. SYSTEM PROGRAMMING CONCEPTS

**What to Learn:**
- File I/O operations (fopen, fread, fwrite, close)
- Process management (getpid, fork, exec)
- Command-line arguments (argc, argv)
- Environment variables
- Signals and signal handling
- Inter-process communication (pipes, sockets)

**File:** `04_system_programming.c`

**Key Concepts:**
```c
- FILE* operations for I/O
- Binary file operations
- getenv() for environment variables
- getcwd() for directory info
- Process creation and management
- Standard streams (stdin, stdout, stderr)
```

**Resume Impact:**
- Shows systems-level understanding
- Critical for embedded/kernel roles
- Essential for Linux/Unix development

**Practice Exercise:**
1. Build a file copy utility
2. Create a process monitor tool
3. Implement a pipeline program
4. Build a configuration file parser

---

## 5. BUILD TOOLS & DEBUGGING

**What to Learn:**
- Makefiles for project automation
- GDB debugger (breakpoints, stepping, inspection)
- Compiler flags (-Wall, -g, -O2, etc.)
- Code organization and modularity
- Valgrind for memory leak detection
- Profiling tools

**File:** `05_build_and_debug.c` + `Makefile`

**Key Concepts:**
```c
Makefile:
- Variables and rules
- Targets and dependencies
- Phony targets
- Compilation flags

GDB Commands:
  break <function>    - Set breakpoint
  run                 - Run program
  next                - Next line
  step                - Step into function
  continue            - Continue execution
  print <var>         - Print variable
  backtrace           - Show call stack

Compiler Flags:
  -g                  - Debug symbols (for GDB)
  -Wall -Wextra       - Enable warnings
  -O0, -O1, -O2, -O3  - Optimization levels
  -fsanitize=address  - Memory sanitizer
  -std=c99            - C99 standard
```

**Resume Impact:**
- Shows professional development practices
- Demonstrates debugging skills
- Essential for team environments

**Practice Exercise:**
1. Create a multi-file Makefile project
2. Debug a program with intentional bugs in GDB
3. Use Valgrind to find memory leaks
4. Profile code for performance bottlenecks

---

## Building and Running Examples

### Option 1: Using Make (Recommended)

```bash
# Build all programs
make

# Run all examples
make run

# Run specific example
make run1      # Fundamentals
make run2      # Memory/Pointers
make run3      # Data Structures
make run4      # System Programming
make run5      # Build & Debug

# Build with debug symbols
make debug

# Clean compiled files
make clean

# Use GDB debugger
make gdb_run

# Check for memory leaks (Linux only)
make valgrind_check
```

### Option 2: Manual Compilation

```bash
# Compile individual files
gcc -Wall -Wextra -g 01_fundamentals.c -o fundamentals

# Run program
./fundamentals

# Debug with GDB
gdb ./fundamentals

# Check memory leaks (Linux/Mac only)
valgrind --leak-check=full ./fundamentals
```

---

## Interview-Ready Topics

### Must Know for Interviews:

1. **Pointer Arithmetic**
   ```c
   int arr[10];
   int *ptr = arr;
   ptr++;  // Points to arr[1]
   ```

2. **Memory Allocation**
   ```c
   int *p = malloc(10 * sizeof(int));
   if (p == NULL) { /* error */ }
   free(p);
   p = NULL;
   ```

3. **Linked List**
   ```c
   struct Node {
       int data;
       struct Node *next;
   };
   ```

4. **Binary Search Tree**
   - Insert, search, delete operations
   - Tree traversal (inorder, preorder, postorder)

5. **Big-O Analysis**
   - Compare algorithms (binary search vs linear)
   - Understand tradeoffs

6. **Sorting Algorithms**
   - Quick Sort: O(n log n) average, O(n²) worst
   - Merge Sort: O(n log n) guaranteed
   - Bubble Sort: O(n²) - avoid in production

---

## Advanced Topics to Explore

### Level 2 (After mastering above):

1. **Advanced Data Structures**
   - AVL trees, Red-Black trees
   - Heaps (min-heap, max-heap)
   - Graph structures

2. **Advanced Memory**
   - Custom allocators
   - Memory pools
   - Garbage collection concepts

3. **System Programming**
   - Socket programming
   - Multithreading (pthreads)
   - Semaphores and mutexes
   - Signal handling

4. **Optimization**
   - Cache efficiency
   - SIMD operations
   - Inline assembly

---

## Common Interview Questions

1. "Explain pointers and how they work"
2. "What's the difference between stack and heap?"
3. "How would you find a memory leak?"
4. "Write a function to reverse a linked list"
5. "Implement binary search"
6. "What's the difference between malloc and calloc?"
7. "How does quick sort work? What's its complexity?"
8. "Design a hash table with collision handling"

---

## Debugging Checklist

```
□ Compile with -Wall -Wextra to catch warnings
□ Use -g flag to include debug symbols
□ Set breakpoints in GDB before running
□ Use 'print' to inspect variable values
□ Check for NULL pointers before dereferencing
□ Always free allocated memory
□ Use Valgrind to detect memory leaks
□ Test edge cases (empty lists, NULL inputs)
□ Check function return values
```

---

## Project Ideas for Resume

### Beginner Projects:
1. **File Manager** - List files, copy, delete, rename
2. **Text Editor** - Basic editing with file I/O
3. **Calculator** - Advanced with expression parsing

### Intermediate Projects:
1. **Compiler/Interpreter** - Lexer, parser, evaluator
2. **No-Dependency Web Server** - HTTP server from scratch
3. **LRU Cache** - Data structure for caching
4. **Database** - B-tree based key-value store

### Advanced Projects:
1. **Kernel Module** - Linux device driver
2. **Game Engine** - Low-level graphics programming
3. **Distributed System** - Client-server architecture
4. **Performance Profiler** - CPU/Memory analysis tool

---

## Resources

- **Books**: "The C Programming Language" by Kernighan & Ritchie
- **GDB**: http://www.sourceware.org/gdb/documentation/
- **Valgrind**: http://valgrind.org/docs/manual/
- **Compiler Docs**: https://gcc.gnu.org/onlinedocs/

---

## Summary: What Makes You Job-Ready

✓ Strong pointer and memory management skills  
✓ Can implement complex data structures  
✓ Understand algorithm complexity analysis  
✓ Can use debugger and profiling tools  
✓ Write clean, maintainable, modular code  
✓ Familiar with build tools and project organization  

---

## Next Steps

1. **Complete all 5 modules** - Run all examples, understand every line
2. **Modify examples** - Change values, add features, break & fix
3. **Complete practice exercises** - Build projects mentioned above
4. **Interview prep** - Answer questions above from memory
5. **Real projects** - Build something useful, contribute to open source

Good luck with your C learning journey! 🚀
#   C - P r o g r a m i n g  
 