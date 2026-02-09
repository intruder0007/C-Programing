# Makefile for C Learning Project
# Topics: Build automation, Compilation flags, Project organization
# 
# Usage:
#   make              - Build all programs
#   make clean        - Remove compiled files
#   make run          - Compile and run all examples
#   make run1, run2, etc - Run specific examples
#   make debug        - Compile with debug symbols for GDB

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
DEBUG_FLAGS = -g -O0
RELEASE_FLAGS = -O2

# Source and output directories
SRCS = 01_fundamentals.c 02_memory_pointers.c 03_data_structures.c 04_system_programming.c 05_build_and_debug.c
EXECS = fundamentals memory_pointers data_structures system_programming build_and_debug

# Default target
all: $(EXECS)

# Building individual executables
fundamentals: 01_fundamentals.c
	$(CC) $(CFLAGS) 01_fundamentals.c -o fundamentals

memory_pointers: 02_memory_pointers.c
	$(CC) $(CFLAGS) 02_memory_pointers.c -o memory_pointers

data_structures: 03_data_structures.c
	$(CC) $(CFLAGS) 03_data_structures.c -o data_structures

system_programming: 04_system_programming.c
	$(CC) $(CFLAGS) 04_system_programming.c -o system_programming

build_and_debug: 05_build_and_debug.c
	$(CC) $(CFLAGS) $(DEBUG_FLAGS) 05_build_and_debug.c -o build_and_debug

# Debug build (with GDB symbols)
debug: CFLAGS += $(DEBUG_FLAGS)
debug: $(EXECS)
	@echo "Debug builds ready for GDB"

# Release build (optimized)
release: CFLAGS += $(RELEASE_FLAGS)
release: $(EXECS)
	@echo "Release builds complete"

# Run all examples
run: all
	@echo "\n=== Running 01_fundamentals ===\n"
	@./fundamentals
	@echo "\n=== Running 02_memory_pointers ===\n"
	@./memory_pointers
	@echo "\n=== Running 03_data_structures ===\n"
	@./data_structures
	@echo "\n=== Running 04_system_programming ===\n"
	@./system_programming arg1 arg2 arg3
	@echo "\n=== Running 05_build_and_debug ===\n"
	@./build_and_debug

# Individual run targets
run1: fundamentals
	./fundamentals

run2: memory_pointers
	./memory_pointers

run3: data_structures
	./data_structures

run4: system_programming
	./system_programming arg1 arg2 arg3

run5: build_and_debug
	./build_and_debug

# Debug with GDB (example: make gdb_run)
gdb_run: build_and_debug
	gdb ./build_and_debug

# Check for memory leaks with Valgrind (Linux only)
valgrind_check: memory_pointers
	valgrind --leak-check=full --show-leak-kinds=all ./memory_pointers

# Clean compiled files
clean:
	rm -f $(EXECS) *.o core
	rm -f test.txt data.bin
	rm -rf test_dir

# Clean everything including backups
distclean: clean
	rm -f *~ *.bak

# Phony targets (not files)
.PHONY: all debug release run run1 run2 run3 run4 run5 clean distclean gdb_run valgrind_check

# Help target
help:
	@echo "Available targets:"
	@echo "  all              - Build all programs (default)"
	@echo "  debug            - Build with debug symbols"
	@echo "  release          - Build optimized release"
	@echo "  run              - Compile and run all examples"
	@echo "  run1-run5        - Run specific example"
	@echo "  gdb_run          - Run example 5 under GDB"
	@echo "  valgrind_check   - Check for memory leaks (Linux only)"
	@echo "  clean            - Remove compiled files"
	@echo "  distclean        - Clean everything including backups"
	@echo ""
	@echo "Examples:"
	@echo "  make             # Build all"
	@echo "  make run1        # Run first example"
	@echo "  make debug       # Build with debug info"
	@echo "  make gdb_run     # Launch with GDB"
