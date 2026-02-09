<div align="center">

# 🔥 C Programming Mastery Hub 🔥
## From Zero to Hero in C Programming

[![C](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Compiler](https://img.shields.io/badge/Compiler-GCC-orange?style=for-the-badge&logo=gnu&logoColor=white)](https://gcc.gnu.org/)
[![Status](https://img.shields.io/badge/Status-🟢%20Active-success?style=for-the-badge)](https://github.com/intruder0007/C-Programing)
[![Level](https://img.shields.io/badge/Level-Beginner%20→%20Advanced-purple?style=for-the-badge)](https://github.com/intruder0007/C-Programing)
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)

### 🎯 Master C Programming with Real-World Examples, Expert Tutorials & Interview Prep

**Perfect for students, developers, and anyone preparing for tech interviews**

<br>

[📚 Modules](#-5-complete-modules) | [🚀 Quick Start](#-quick-start-60-seconds) | [💼 Interview](#-must-know-interview-questions) | [🛠️ Tools](#-build-tools) | [⭐ Projects](#-awesome-project-ideas)

---

### 📊 What You'll Get

<img src="https://img.shields.io/badge/5%20Complete%20Modules-✅-brightgreen?style=for-the-badge" alt="modules"> 
<img src="https://img.shields.io/badge/50%2B%20Code%20Examples-✅-brightgreen?style=for-the-badge" alt="examples"> 
<img src="https://img.shields.io/badge/15%2B%20Interview%20Q's-✅-brightgreen?style=for-the-badge" alt="interview">
<img src="https://img.shields.io/badge/10%2B%20Projects-🚀-blue?style=for-the-badge" alt="projects">

</div>

---

## 🌟 Why Learn C?

```
┌─────────────────────────────────────────────────────────┐
│ C is the FOUNDATION of modern programming              │
│                                                         │
│ • Taught in 95% of computer science programs           │
│ • Used in: Operating Systems, Databases, Compilers     │
│ • Master C → Understand how computers REALLY work      │
│ • Essential for: Embedded Systems, Game Dev, Security  │
│ • Top companies (Google, Facebook, Apple) hire C devs  │
└─────────────────────────────────────────────────────────┘
```

---

## ⚡ Quick Start (60 Seconds)

### 1️⃣ Clone Repository
```bash
git clone https://github.com/intruder0007/C-Programing.git
cd C-Programing
```

### 2️⃣ Build All Modules
```bash
make              # Compiles all 5 modules
```

### 3️⃣ Run Examples
```bash
make run1         # 👉 Start here: Core Fundamentals
make run2         # Memory & Pointers  
make run3         # Data Structures
make run4         # System Programming
make run5         # Build & Debug
```

---

## 📚 5 Complete Modules

<div align="center">

### Module 1️⃣: CORE FUNDAMENTALS
👉 **`01_fundamentals.c`** | 📖 100 lines | ⏱️ 15 mins

</div>

Learn the building blocks of C programming

```c
✓ Variables & Data Types      int, float, char, struct, union
✓ Operators                   Arithmetic, logical, bitwise  
✓ Control Flow               if/else, switch, for, while loops
✓ Functions                  Declaration, recursion, scope
✓ Function Pointers          Callbacks, advanced patterns
✓ Arrays & Strings           Stack arrays, string operations
```

**💡 Key Concept Example:**
```c
// Function Pointers - Interview Favorite!
typedef int (*Operation)(int, int);

int add(int a, int b) { return a + b; }

int apply(int x, int y, Operation op) {
    return op(x, y);
}

int main() {
    printf("%d\n", apply(10, 5, add));  // Output: 15
}
```

**💼 Resume Impact:** Shows solid understanding of C fundamentals  
**🎯 Difficulty:** Beginner (2/5)

---

<div align="center">

### Module 2️⃣: MEMORY & POINTERS
👉 **`02_memory_pointers.c`** | 📖 150 lines | ⏱️ 20 mins

</div>

Master memory management - the most critical C skill

```c
✓ Pointers 101               Address-of (&), dereference (*)
✓ Pointer Arithmetic         Array traversal, offset calculation
✓ Dynamic Allocation         malloc(), calloc(), realloc(), free()
✓ Memory Management          Stack vs Heap, memory layout
✓ Common Pitfalls            Dangling pointers, memory leaks
✓ Best Practices             Null checks, proper deallocation
```

**💡 Key Concept Example:**
```c
// Dynamic Arrays - Essential Pattern
int *arr = malloc(10 * sizeof(int));
if (arr == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
}

for (int i = 0; i < 10; i++) {
    arr[i] = i * 2;
}

printf("%d\n", arr[5]);  // Output: 10
free(arr);               // ALWAYS FREE
arr = NULL;              // AVOID USE-AFTER-FREE
```

**💼 Resume Impact:** Pointers mastery = deep C knowledge  
**🎯 Difficulty:** Intermediate (3/5)

---

<div align="center">

### Module 3️⃣: DATA STRUCTURES & ALGORITHMS
👉 **`03_data_structures.c`** | 📖 280 lines | ⏱️ 30 mins

</div>

Implement efficient algorithms and data structures

```c
✓ Linked Lists              Single, double, circular
✓ Stacks & Queues          Push/pop, enqueue/dequeue
✓ Sorting Algorithms       Bubble, Quick, Merge sort
✓ Searching                Linear search, Binary search  
✓ Big-O Analysis           Time & space complexity
```

**⚡ Algorithm Performance Comparison:**

```
Algorithm        | Time (Avg)   | Time (Worst) | Space  | Use When
─────────────────┼──────────────┼──────────────┼────────┼──────────
Bubble Sort      | O(n²)        | O(n²)        | O(1)   | Learning
Quick Sort       | O(n log n)   | O(n²)        | O(log n)| General
Merge Sort       | O(n log n)   | O(n log n)   | O(n)   | Stable sort
Binary Search†   | O(log n)     | O(log n)     | O(1)   | Sorted data

† Requires sorted array
```

**💡 Key Concept Example:**
```c
// Linked List Implementation
typedef struct Node {
    int data;
    struct Node *next;
} Node;

void insert_front(Node **head, int value) {
    Node *new = malloc(sizeof(Node));
    new->data = value;
    new->next = *head;
    *head = new;
}

void print_list(Node *head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
```

**💼 Resume Impact:** Interview must-have - shows algorithmic thinking  
**🎯 Difficulty:** Intermediate-Advanced (4/5)

---

<div align="center">

### Module 4️⃣: SYSTEM PROGRAMMING
👉 **`04_system_programming.c`** | 📖 180 lines | ⏱️ 25 mins

</div>

Interact with operating system features

```c
✓ File I/O                  Text and binary file operations
✓ Command-Line Args         argc, argv parsing
✓ Environment Variables     getenv() system information
✓ Process Management        Process IDs, parent-child relations
✓ Directory Operations      getcwd(), directory traversal
```

**💡 Key Concept Example:**
```c
// File Reading - Common Interview Question
FILE *file = fopen("data.txt", "r");
if (!file) {
    perror("fopen");
    return 1;
}

char line[256];
while (fgets(line, sizeof(line), file)) {
    printf("%s", line);
}

fclose(file);

// Command Line Arguments
// ./program arg1 arg2 arg3
int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
}
```

**💼 Resume Impact:** Essential for backend, systems, and embedded roles  
**🎯 Difficulty:** Intermediate (3/5)

---

<div align="center">

### Module 5️⃣: BUILD TOOLS & DEBUGGING  
👉 **`05_build_and_debug.c`** | 📖 200 lines | ⏱️ 25 mins

</div>

Professional development practices

```c
✓ Makefiles                 Build automation, compilation
✓ GDB Debugger             Breakpoints, inspection, stepping
✓ Compiler Flags           -Wall, -g, -O2 optimization
✓ Valgrind                 Memory leak detection
✓ Code Organization        Multi-file projects
```

**🐛 GDB Quick Reference:**
```bash
# Start debugging
gdb ./program

# Essential GDB commands
break main              # Set breakpoint
run                     # Start program
next                    # Step over function
step                    # Step into function
print variable          # Print value
backtrace               # Show call stack
continue                # Continue execution
quit                    # Exit
```

**🏗️ Makefile Example:**
```makefile
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g

program: main.c utils.c
	$(CC) $(CFLAGS) -o program main.c utils.c

debug: program
	gdb ./program

run: program
	./program

clean:
	rm -f program *.o
```

**💼 Resume Impact:** Shows professional development skills  
**🎯 Difficulty:** Beginner-Intermediate (2.5/5)

---

## 💻 Build & Run Commands

### ✨ Using Make (Recommended)

```bash
make              # Build all 5 modules
make run          # Run all examples
make run1-5       # Run specific module (1, 2, 3, 4, or 5)
make debug        # Build with debug symbols
make clean        # Remove compiled files
```

### 🔨 Manual Compilation

```bash
# Compile single file
gcc -Wall -Wextra -g 01_fundamentals.c -o fundamentals
./fundamentals

# Compile with optimization
gcc -O2 -Wall 02_memory_pointers.c -o memory
```

### 🐛 Debugging with GDB

```bash
make gdb_run      # Launch module 5 in GDB
# Or manually:
gdb ./build_and_debug
```

---

## 💡 Must-Know Interview Questions

### 🟢 Easy (Just Warm-up)

**Q1: What are pointers?**
```c
int x = 10;
int *ptr = &x;           // ptr holds address of x
printf("%d\n", *ptr);    // Dereference: prints 10
printf("%p\n", ptr);     // Address: prints 0x...
```

**Q2: What's the difference between stack and heap?**
```
┌─────────────────────────────────┬──────────────────────┐
│ STACK                           │ HEAP                 │
├─────────────────────────────────┼──────────────────────┤
│ ✓ Fast                          │ ✗ Slower             │
│ ✓ Automatic cleanup             │ ✗ Manual management  │
│ ✗ Limited size                  │ ✓ Large size         │
│ ✗ Fixed at compile time         │ ✓ Dynamic resizing   │
│ ✓ Local variables               │ ✓ malloc/calloc      │
└─────────────────────────────────┴──────────────────────┘
```

---

### 🟡 Medium (Time to Impress)

**Q3: Write code to reverse a linked list**
```c
Node* reverse(Node *head) {
    Node *prev = NULL, *curr = head, *next;
    while (curr) {
        next = curr->next;     // Save next
        curr->next = prev;     // Reverse link
        prev = curr;           // Move prev
        curr = next;           // Move curr
    }
    return prev;  // New head
}
```

**Q4: Implement binary search**
```c
int binary_search(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;  // Not found
}
```

---

### 🔴 Hard (Expert Level)

**Q5: Detect memory leaks in this code**
```c
// ❌ WRONG - Memory leak!
int *create_array(int size) {
    int *temp = malloc(size * sizeof(int));
    int *result = malloc(size * sizeof(int));
    free(temp);
    return result;  // ✓ Return is freed, but what about result?
}

// ✓ CORRECT
int *create_array(int size) {
    int *arr = malloc(size * sizeof(int));
    return arr;  // Caller must free this!
}

int main() {
    int *data = create_array(10);
    // use data...
    free(data);  // DON'T FORGET THIS!
}
```

**Q6: What's the output?**
```c
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    printf("%d ", *ptr++);      // ? (prints 1, ptr++, then next)
    printf("%d ", (*ptr)++);    // ? (prints 2, then increments arr[1])
    printf("%d\n", *ptr);       // ? (prints 3)
}
// Output: 1 2 3
```

**Q7: Fix this dangling pointer**
```c
// ❌ WRONG
char* get_string() {
    char str[] = "Hello";
    return str;  // str is on stack, gets destroyed!
}

// ✓ CORRECT  
char* get_string() {
    char *str = malloc(6);
    strcpy(str, "Hello");
    return str;  // Caller must free this
}
```

---

## 🚀 Awesome Project Ideas

### 🟢 Beginner Projects (Week 1-2)

| Project | Learn | Time |
|---------|-------|------|
| **Simple Calculator** | Functions, operators | 2-3 hours |
| **Contact Manager** | Struct, file I/O | 4-5 hours |
| **Number Guessing** | Loops, random, user input | 2-3 hours |

### 🟡 Intermediate Projects (Week 2-4)

| Project | Learn | Time |
|---------|-------|------|
| **Todo List App** | Dynamic arrays, file I/O, strings | 1 week |
| **File Encryption** | Binary I/O, bit operations | 1 week |
| **Dictionary/Spell Checker** | Sorting, binary search, hash | 2 weeks |

### 🔴 Advanced Projects (Week 4+)

| Project | Learn | Time |
|---------|-------|------|
| **HTTP Server** | Networking, sockets, processes | 3-4 weeks |
| **Database Engine** | Data structures, indexing, B-trees | 4+ weeks |
| **Game (Tetris/Snake)** | Graphics, game loops, state mgmt | 3+ weeks |

---

## ✅ Project Checklist

Use this to track your progress:

```
MODULE COMPLETION
─────────────────────────────────────
□ Module 1: Core Fundamentals      [____]
□ Module 2: Memory & Pointers      [____]
□ Module 3: Data Structures        [____]
□ Module 4: System Programming     [____]
□ Module 5: Build & Debug          [____]

SKILLS MASTERY
─────────────────────────────────────
□ Pointers & pointer arithmetic
□ Dynamic memory allocation
□ Linked lists & trees
□ Sorting & searching algorithms
□ File I/O operations
□ Debugging with GDB
□ Makefiles & compilation
□ Command-line argument parsing

PROJECTS COMPLETED
─────────────────────────────────────
□ Simple Calculator
□ Contact Manager
□ Todo List App
□ Custom Data Structure
□ File Handling Tool
```

---

## 🛠️ Required Tools

### Installation Guide

**Windows:**
```bash
# Install MinGW (includes GCC)
# Download from: https://www.mingw-w64.org/

# Verify installation
gcc --version
make --version
```

**Linux (Ubuntu/Debian):**
```bash
sudo apt-get update
sudo apt-get install build-essential gdb valgrind
```

**macOS:**
```bash
# Install Xcode Command Line Tools
xcode-select --install

# Or use Homebrew
brew install gcc gdb
```

---

## 🎓 Learning Resources

### 📚 Must-Read Books
- **"The C Programming Language"** - Kernighan & Ritchie (The Bible)
- **"C Primer Plus"** - Stephen Prata (Beginner-friendly)
- **"Advanced Programming in the UNIX Environment"** - Stevens & Rago

### 🌐 Websites
- [C Reference](https://en.cppreference.com/w/c) - Comprehensive reference
- [GDB Manual](http://www.sourceware.org/gdb/) - Debugger guide
- [Valgrind Docs](http://valgrind.org/) - Memory profiling

### 💻 Practice Platforms
- **LeetCode** - Real interview questions in C
- **HackerRank** - Guided C problems
- **Project Euler** - Algorithm challenges

---

## 🌈 Features at a Glance

<div align="center">

| Feature | Details | Rating |
|:---:|:---|:---:|
| **Modularity** | 5 independent, progressive modules | ⭐⭐⭐⭐⭐ |
| **Code Quality** | Production-grade examples | ⭐⭐⭐⭐⭐ |
| **Documentation** | Detailed comments throughout | ⭐⭐⭐⭐⭐ |
| **Difficulty Curve** | Perfect progression | ⭐⭐⭐⭐⭐ |
| **Interview Prep** | Real questions with solutions | ⭐⭐⭐⭐⭐ |
| **Project Ideas** | 10+ portfolio projects | ⭐⭐⭐⭐⭐ |

</div>

---

## 🎯 Your Learning Journey

```
WEEK 1                          WEEK 2-3                    WEEK 4-5                    WEEK 6+
Core Fundamentals              Memory & Pointers           Data Structures           Advanced Projects
├─ Variables                    ├─ Pointers                ├─ Linked Lists            ├─ HTTP Server
├─ Operators                    ├─ Dynamic Memory          ├─ Trees                   ├─ Database
├─ Control Flow                 ├─ Memory Layout           ├─ Hashing                 ├─ Game Engine
├─ Functions                    └─ Best Practices          └─ Algorithms              └─ Networking
└─ Arrays & Structs
        ↓                               ↓                           ↓                          ↓
    [MODULE 1]                     [MODULE 2]                   [MODULE 3]               [MODULES 4-5]
    Complete ✓                     Complete ✓                   Complete ✓               Complete ✓
```

---

## 💬 FAQ

**Q: Is C still relevant?**  
A: Absolutely! C is in Linux kernels, databases, and required for embedded systems. Top tech companies still use it.

**Q: Do I need prior programming experience?**  
A: No! Some programming background helps, but we start from basics. Just be dedicated.

**Q: How long to master C?**  
A: 4-8 weeks with consistent effort (10+ hours/week). Quick learners: 2-3 weeks.

**Q: Can I use this to prepare for interviews?**  
A: Yes! Modules 2 & 3 are interview gold. Practice the questions section.

**Q: What compiler should I use?**  
A: GCC is recommended (MinGW on Windows). Clang also works perfectly.

---

## 📝 Repository Structure

```
C-Programing/
├── 01_fundamentals.c          📖 Core language concepts
├── 02_memory_pointers.c       🧠 Memory & pointer mastery  
├── 03_data_structures.c       📊 Data structures & algorithms
├── 04_system_programming.c    ⚙️ File I/O, processes
├── 05_build_and_debug.c       🐛 Debugging & build tools
├── Makefile                   🔨 Build automation
├── .gitignore                 🚫 Git ignore (*.exe only)
└── README.md                  📚 This beautiful guide
```

---

## 🤝 Contributing

Found a bug? Want to add examples? Contributions welcome!

```bash
# Fork the repo → Clone → Create branch → Make changes → Push → PR
git clone https://github.com/YOUR_USERNAME/C-Programing.git
git checkout -b feature/amazing-feature
git commit -m "Add amazing feature"
git push origin feature/amazing-feature
```

---

## ⭐ Support This Project

If this repo helped you:
- ⭐ **Star** this repository
- 🔗 **Share** with friends learning C
- 📢 **Mention** in your projects
- 🤝 **Contribute** improvements

---

<div align="center">

## 🎉 Ready to Master C?

### Start with Module 1 right now!

```bash
git clone https://github.com/intruder0007/C-Programing.git
cd C-Programing
make run1
```

### 🚀 Your C Programming Journey Starts Here

**Questions?** Open an issue  
**Suggestions?** Start a discussion  
**Found a bug?** Submit a PR  

---

### Made with 💜 by Intruder

![Progress](https://img.shields.io/badge/Progress-🔥🔥🔥🔥🔥-green?style=flat-square)

</div>
