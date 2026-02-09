# 🚀 C Programming Learning Path - Resume Boost Guide

<div align="center">

![C](https://img.shields.io/badge/C-Language-blue?style=for-the-badge&logo=c)
![Status](https://img.shields.io/badge/Status-Active-success?style=for-the-badge)
![Difficulty](https://img.shields.io/badge/Difficulty-Beginner%20to%20Advanced-orange?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)

**Master C Programming with Practical Examples & Interview Prep**

[Quick Start](#-quick-start) • [Modules](#-modules) • [Projects](#-projects) • [Resources](#-resources) • [Interview Questions](#-interview-questions)

</div>

---

## 📌 Overview

This comprehensive learning repository contains **5 production-ready modules** covering everything you need to master C programming and boost your resume. Each module includes:

✅ **Detailed explanations** with code comments  
✅ **Runnable examples** that compile without errors  
✅ **Best practices** for production code  
✅ **Interview-ready concepts** with solutions  
✅ **Build automation** with Makefile  
✅ **Debugging techniques** with GDB examples  

---

## ⚡ Quick Start

### Prerequisites
- **GCC Compiler** (MinGW on Windows, gcc on Linux/Mac)
- **Make** (for automation)
- **Git** (for version control)

### Setup & Run

```bash
# Clone the repository
git clone https://github.com/intruder0007/C-Programing.git
cd C-Programing

# Build all modules
make

# Run a specific module (1-5)
make run1    # Core fundamentals
make run2    # Memory & pointers
make run3    # Data structures
make run4    # System programming
make run5    # Build & debug

# Build with debug symbols (for GDB)
make debug

# Clean compiled files
make clean
```

---

## 📚 Modules Overview

### 1️⃣ Core Language Fundamentals
**File:** `01_fundamentals.c`

Master the foundation of C programming with essential concepts.

| Concept | Coverage | Status |
|---------|----------|--------|
| **Data Types** | int, float, char, structs, unions | ✅ Complete |
| **Operators** | Arithmetic, logical, bitwise, comparison | ✅ Complete |
| **Control Flow** | if/else, switch, for, while, do-while | ✅ Complete |
| **Functions** | Declaration, definition, recursion | ✅ Complete |
| **Function Pointers** | Callbacks and advanced patterns | ✅ Complete |
| **Arrays & Strings** | Stack arrays, string manipulation | ✅ Complete |

**Key Learning Points:**
```c
// Variables and Data Types
int age = 25;
float salary = 50000.50;
char name[50] = "John";
struct Person { char name[50]; int age; };

// Operators & Control Flow
if (age >= 18) { printf("Adult\n"); }
for (int i = 0; i < 5; i++) { printf("%d\n", i); }

// Function Pointers
typedef int (*Operation)(int, int);
int result = apply_operation(10, 20, &add);
```

**💼 Resume Impact:** Demonstrates strong C fundamentals and command of language syntax.

---

### 2️⃣ Memory Management & Pointers
**File:** `02_memory_pointers.c`

Understand the C memory model - the most critical skill for C developers.

| Concept | Coverage | Status |
|---------|----------|--------|
| **Pointers** | Address-of (&), dereference (*), arithmetic | ✅ Complete |
| **Dynamic Allocation** | malloc, calloc, realloc, free | ✅ Complete |
| **Memory Leaks** | Detection and prevention | ✅ Complete |
| **Pointer Types** | Single, double, void pointers | ✅ Complete |
| **Stack vs Heap** | Memory layout and usage | ✅ Complete |

**Key Learning Points:**
```c
// Pointer Basics
int x = 10;
int *ptr = &x;          // Address of x
printf("%d\n", *ptr);   // Dereference: 10

// Dynamic Allocation
int *arr = malloc(10 * sizeof(int));
if (arr == NULL) { /* handle error */ }
free(arr);
arr = NULL;  // Avoid dangling pointers

// Pointer Arithmetic
int *p = arr;
p++;  // Points to arr[1]
printf("%d\n", *(p + 2));  // arr[3]
```

**💼 Resume Impact:** Pointers mastery is essential - shows deep C knowledge and systems thinking.

---

### 3️⃣ Data Structures & Algorithms
**File:** `03_data_structures.c`

Build efficient solutions using fundamental data structures.

| Data Structure | Operations | Complexity | Status |
|---|---|---|---|
| **Linked List** | Insert, delete, traverse | O(n) | ✅ Complete |
| **Stack** | Push, pop, peek | O(1) | ✅ Complete |
| **Queue** | Enqueue, dequeue | O(1) | ✅ Complete |
| **Sorting** | Bubble, Quick, Merge | O(n²) - O(n log n) | ✅ Complete |
| **Searching** | Linear, Binary | O(n) - O(log n) | ✅ Complete |

**Sorting Algorithm Comparison:**

```
Algorithm       Best Case       Average Case    Worst Case      Space
─────────────────────────────────────────────────────────────────────
Bubble Sort     O(n)            O(n²)           O(n²)           O(1)
Quick Sort      O(n log n)      O(n log n)      O(n²)           O(log n)
Merge Sort      O(n log n)      O(n log n)      O(n log n)      O(n)
Binary Search†  O(1)            O(log n)        O(log n)        O(1)

† Requires sorted array
```

**Key Implementation:**
```c
// Linked List
struct Node {
    int data;
    struct Node *next;
};

void insert_at_head(Node **head, int data) {
    Node *new = malloc(sizeof(Node));
    new->data = data;
    new->next = *head;
    *head = new;
}

// Quick Sort
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quick_sort(arr, low, pivot - 1);
        quick_sort(arr, pivot + 1, high);
    }
}
```

**💼 Resume Impact:** Shows algorithm design, complexity analysis, and data structure knowledge.

---

### 4️⃣ System Programming Concepts
**File:** `04_system_programming.c`

Interact with OS-level features and system resources.

| Concept | Coverage | Platform | Status |
|---------|----------|----------|--------|
| **File I/O** | fopen, fread, fwrite, fclose | Cross-platform | ✅ Complete |
| **Binary Files** | Reading/writing binary data | Cross-platform | ✅ Complete |
| **Command Args** | argc, argv parsing | Cross-platform | ✅ Complete |
| **Environment** | getenv() for system vars | Cross-platform | ✅ Complete |
| **Processes** | Process info, management | Unix/Linux | ✅ Complete |
| **Directories** | Directory operations, cwd | Cross-platform | ✅ Complete |

**Key Operations:**
```c
// Text File I/O
FILE *file = fopen("data.txt", "r");
if (file) {
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
}

// Binary I/O
int data[5] = {1, 2, 3, 4, 5};
FILE *bin = fopen("data.bin", "wb");
fwrite(data, sizeof(int), 5, bin);
fclose(bin);

// Command Line Arguments
int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
}
```

**💼 Resume Impact:** Essential for systems programming, embedded systems, and backend development roles.

---

### 5️⃣ Build Tools & Debugging
**File:** `05_build_and_debug.c` + `Makefile`

Professional development practices and debugging techniques.

| Tool | Purpose | Coverage | Status |
|------|---------|----------|--------|
| **Makefile** | Build automation | Multi-target builds | ✅ Complete |
| **GDB** | Debugger | Breakpoints, inspection | ✅ Complete |
| **Compiler Flags** | Optimization & warnings | -g, -Wall, -O2 | ✅ Complete |
| **Valgrind** | Memory checker | Leak detection | ✅ Complete |
| **Code Organization** | Modularity | Multi-file projects | ✅ Complete |

**GDB Quick Reference:**
```bash
# Start debugging
gdb ./program

# Debug commands
(gdb) break main              # Set breakpoint at main
(gdb) break file.c:42         # Set at line 42
(gdb) run                     # Run program
(gdb) next                    # Execute next line
(gdb) step                    # Step into functions
(gdb) continue                # Continue execution
(gdb) print variable          # Print variable value
(gdb) print &variable         # Print address
(gdb) backtrace               # Show call stack
(gdb) quit                    # Exit GDB
```

**Makefile Example:**
```makefile
CC = gcc
CFLAGS = -Wall -Wextra -g

program: main.c utils.c
	$(CC) $(CFLAGS) main.c utils.c -o program

run: program
	./program

debug: CFLAGS += -O0
debug: program
	gdb ./program

clean:
	rm -f program *.o
```

**💼 Resume Impact:** Shows professional development practices and debugging expertise.

---

## 🗂️ Project Structure

```
C-Programing/
├── 01_fundamentals.c          📖 Core language concepts
├── 02_memory_pointers.c       🧠 Memory management
├── 03_data_structures.c       📊 Data structures & algorithms
├── 04_system_programming.c    ⚙️ System APIs
├── 05_build_and_debug.c       🐛 Debugging techniques
├── Makefile                   🔨 Build automation
├── .gitignore                 🚫 Git ignore rules
└── README.md                  📚 This file
```

---

## 🎯 Build & Run Commands

### Using Make (Recommended)

```bash
# Build everything
make              # Build all programs
make debug        # Build with debug symbols
make release      # Build optimized

# Run examples
make run          # Run all examples
make run1-5       # Run specific module

# Debug with GDB
make gdb_run      # Launch module 5 in GDB

# Memory profiling (Linux only)
make valgrind_check

# Cleanup
make clean        # Remove binaries
make distclean     # Remove everything
```

### Manual Compilation

```bash
# Single file
gcc -Wall -Wextra -g 01_fundamentals.c -o fundamentals
./fundamentals

# Multiple files
gcc -Wall -Wextra -g main.c utils.c -o program
./program

# With optimization
gcc -O2 -Wall program.c -o program
```

---

## 💻 Compiler Flags Explained

| Flag | Purpose | Example |
|------|---------|---------|
| `-Wall` | Enable all common warnings | Catches unused variables |
| `-Wextra` | Extra warnings beyond -Wall | Even stricter checking |
| `-g` | Include debug symbols | Required for GDB |
| `-O0` | No optimization (faster compile) | Use during development |
| `-O2` | Moderate optimization | Good for release |
| `-O3` | Maximum optimization | Performance critical |
| `-std=c99` | Use C99 standard | Modern C features |
| `-fsanitize=address` | Memory sanitizer | Catch buffer overflows |

---

## 📖 Learning Path

### Week 1: Fundamentals
- ✅ Module 1: Core language basics
- ✅ Practice: Build a simple calculator
- ✅ Project: Contact management system

### Week 2: Memory & Pointers
- ✅ Module 2: Pointers and allocation
- ✅ Practice: Dynamic array implementation
- ✅ Project: Custom memory allocator

### Week 3: Data Structures
- ✅ Module 3: Algorithms and structures
- ✅ Practice: Implement linked lists
- ✅ Project: LRU Cache implementation

### Week 4: System Programming
- ✅ Module 4: File I/O and processes
- ✅ Practice: File copy utility
- ✅ Project: Configuration file parser

### Week 5: Professional Development
- ✅ Module 5: Build tools & debugging
- ✅ Practice: Debug intentional bugs
- ✅ Project: Multi-file project organization

### Week 6+: Advanced Projects
- 🚀 Web Server implementation
- 🚀 Database engine with B-trees
- 🚀 Game engine
- 🚀 Contributing to open source

---

## 🎓 Interview Questions & Answers

### Level 1: Fundamentals

**Q1: Explain pointers and how they work**
```c
int x = 10;
int *ptr = &x;      // ptr holds address of x
printf("%d", *ptr); // Dereference to get value (10)
```

**Q2: What are the differences between stack and heap?**
```
Stack                          Heap
─────────────────────────────────────
Automatic allocation/dealloc   Manual management
Fixed size, known at compile   Dynamic size
Fast access                    Slower access
Limited size                   Large size available
LIFO data structure            Tree structure
Local variables                malloc/calloc
```

**Q3: How do you prevent memory leaks?**
```c
// Rule: Every malloc needs a free
int *ptr = malloc(100);
// ... use ptr ...
free(ptr);      // MUST do this
ptr = NULL;     // Avoid dangling pointer
```

### Level 2: Data Structures

**Q4: Write a function to reverse a linked list**
```c
Node* reverse(Node* head) {
    Node *prev = NULL, *current = head, *next;
    while (current) {
        next = current->next;      // Save next
        current->next = prev;      // Reverse link
        prev = current;            // Move prev
        current = next;            // Move current
    }
    return prev;  // New head
}
```

**Q5: Difference between O(n) and O(n²)?**
```
For n = 1000:
O(n)   = 1,000 operations        (1ms)
O(n²)  = 1,000,000 operations    (1s)

For n = 1,000,000:
O(n)   = 1,000,000 ops           (1ms)
O(n²)  = 1,000,000,000,000 ops   (1000s) ❌
```

### Level 3: System Programming

**Q6: How do you read a file in C?**
```c
FILE *file = fopen("data.txt", "r");
if (file == NULL) {
    printf("Error opening file\n");
    return 1;
}

char line[256];
while (fgets(line, sizeof(line), file)) {
    printf("%s", line);
}

fclose(file);
```

**Q7: What are command-line arguments?**
```c
// Compile: gcc program.c -o program
// Run: ./program arg1 arg2 arg3

int main(int argc, char *argv[]) {
    printf("Arguments: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("  argv[%d] = %s\n", i, argv[i]);
    }
}
```

---

## 🚀 Project Ideas

### Beginner (1-2 weeks)
- 📝 **Text File Processor** - Read, modify, write files
- 🧮 **Advanced Calculator** - With expression parsing
- 📋 **Todo List Manager** - File-based storage

### Intermediate (2-4 weeks)
- 📊 **LRU Cache** - Eviction policy, O(1) operations
- 🔍 **Search Utility** - Grep-like pattern matching
- 📦 **Compression Tool** - Basic data compression

### Advanced (4+ weeks)
- 🌐 **HTTP Server** - From scratch, no frameworks
- 💾 **Database** - Key-value store with B-trees
- 🎮 **Game Engine** - Snake, Tetris, or Pac-Man
- 📡 **Chat Application** - Sockets, networking

---

## 📚 Key Topics Checklist

### Pointers & Memory
- [ ] Pointer declaration and dereferencing
- [ ] Pointer arithmetic and arrays
- [ ] malloc/calloc/realloc/free
- [ ] Memory leak detection
- [ ] Double pointers and arrays of pointers
- [ ] Function pointers and callbacks

### Data Structures
- [ ] Arrays and multidimensional arrays
- [ ] Linked lists (single, double, circular)
- [ ] Stacks and queues
- [ ] Trees (binary, BST, balanced)
- [ ] Hash tables
- [ ] Graphs (adjacency matrix/list)

### Algorithms
- [ ] Sorting (bubble, quick, merge, heap)
- [ ] Searching (linear, binary)
- [ ] Graph algorithms (BFS, DFS)
- [ ] Dynamic programming basics
- [ ] Greedy algorithms

### System Programming
- [ ] File I/O (text and binary)
- [ ] Process management
- [ ] Signal handling
- [ ] Pipes and IPC
- [ ] Socket programming
- [ ] Multithreading (pthreads)

---

## 🔧 Tools & Technologies

| Tool | Purpose | Installation |
|------|---------|--------------|
| **GCC** | Compiler | `apt-get install gcc` (Linux), download for Windows |
| **GDB** | Debugger | Usually bundled with GCC |
| **Valgrind** | Memory checker | `apt-get install valgrind` (Linux only) |
| **Make** | Build automation | `apt-get install build-essential` |
| **VS Code** | Editor | Download from official site |

---

## 🌟 Best Practices

### 1. **Always Check Return Values**
```c
int *ptr = malloc(sizeof(int));
if (ptr == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
}
```

### 2. **Free Memory Properly**
```c
// Good practice
int *data = malloc(100);
// ... use data ...
free(data);
data = NULL;  // Avoid use-after-free
```

### 3. **Use Meaningful Variable Names**
```c
// Good
int student_age = 20;
float average_score = 95.5;

// Bad
int a = 20;
float x = 95.5;
```

### 4. **Comment Complex Logic**
```c
// Allocate buffer with extra space for null terminator
char *buffer = malloc(str_len + 1);
if (buffer) strcpy(buffer, input);
```

### 5. **Compile with Warnings**
```bash
gcc -Wall -Wextra -Werror program.c -o program
```

---

## 📖 Recommended Resources

- **Books**
  - "The C Programming Language" by Kernighan & Ritchie
  - "C Primer Plus" by Stephen Prata
  - "Advanced Programming in the UNIX Environment"

- **Online Resources**
  - [GDB Documentation](http://www.sourceware.org/gdb/)
  - [Valgrind Manual](http://valgrind.org/docs/manual/)
  - [C Standard Library Reference](https://en.cppreference.com/w/c)

- **Practice Platforms**
  - LeetCode (C problems)
  - HackerRank (C challenges)
  - Project Euler (algorithm problems)

---

## 🤝 Contributing

Found a bug or want to improve this repo? Contributions welcome!

```bash
# Fork the repository
# Create a feature branch
git checkout -b feature/amazing-feature

# Commit your changes
git commit -m 'Add amazing feature'

# Push to branch
git push origin feature/amazing-feature

# Open a Pull Request
```

---

## 📄 License

This project is licensed under the **MIT License** - see the LICENSE file for details.

---

## 🙋 Support

- **Questions?** Open an issue
- **Suggestions?** Open a discussion
- **Bug found?** Submit a bug report

---

## 🎉 Next Steps

```bash
# 1. Clone this repository
git clone https://github.com/intruder0007/C-Programing.git

# 2. Explore the modules
cd C-Programing
make run1   # Start with fundamentals

# 3. Follow the learning path
# Complete each module in order

# 4. Build projects
# Use the skills to build real applications

# 5. Share your progress!
# Star this repo if it helped you ⭐
```

---

<div align="center">

**Happy Coding! 🚀**

Made with ❤️ by [intruder0007](https://github.com/intruder0007)

![C Logo](https://img.shields.io/badge/Made%20With-C-blue?style=flat-square)

</div>

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
#   C - P r o g r a m i n g 
 
 