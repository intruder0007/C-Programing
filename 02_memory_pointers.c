#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * MEMORY MANAGEMENT - POINTERS AND ALLOCATION
 * Topics: pointers, dynamic allocation, pointer arithmetic, memory deallocation
 */

void print_address_info(int value) {
    int x = value;
    int *ptr = &x;
    
    printf("\nPointer Examples:\n");
    printf("  Value of x: %d\n", x);
    printf("  Address of x: %p\n", (void*)&x);
    printf("  Pointer ptr: %p\n", (void*)ptr);
    printf("  Dereference *ptr: %d\n", *ptr);
}

void pointer_arithmetic() {
    printf("\n\nPointer Arithmetic:\n");
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    printf("  Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("  Using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("    *(ptr + %d) = %d\n", i, *(ptr + i));
    }
}

void dynamic_allocation() {
    printf("\n\nDynamic Memory Allocation:\n");
    
    // Single integer allocation
    int *num = (int *)malloc(sizeof(int));
    *num = 42;
    printf("  Single int: %d\n", *num);
    free(num);
    
    // Array allocation
    int size = 5;
    int *array = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        array[i] = i * 10;
    }
    printf("  Dynamic array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array);
    
    // Calloc (initializes to 0)
    int *zeros = (int *)calloc(3, sizeof(int));
    printf("  Calloc (zeros): ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", zeros[i]);
    }
    printf("\n");
    free(zeros);
}

void string_memory() {
    printf("\n\nString Memory Management:\n");
    
    // Stack string (fixed size)
    char stack_str[20] = "Stack String";
    printf("  Stack string: %s\n", stack_str);
    
    // Heap string (dynamic)
    char *heap_str = (char *)malloc(20 * sizeof(char));
    strcpy(heap_str, "Heap String");
    printf("  Heap string: %s\n", heap_str);
    free(heap_str);
}

void pointer_to_pointer() {
    printf("\n\nPointer to Pointer:\n");
    int x = 100;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;
    
    printf("  x = %d\n", x);
    printf("  *ptr1 = %d\n", *ptr1);
    printf("  **ptr2 = %d\n", **ptr2);
}

int main() {
    printf("=== MEMORY MANAGEMENT & POINTERS ===\n");
    
    print_address_info(25);
    pointer_arithmetic();
    dynamic_allocation();
    string_memory();
    pointer_to_pointer();
    
    printf("\n\n=== MEMORY BEST PRACTICES ===\n");
    printf("1. Always free dynamically allocated memory\n");
    printf("2. Don't use pointers after freeing them (use NULL)\n");
    printf("3. Check malloc return value for NULL\n");
    printf("4. Use valgrind to detect memory leaks\n");
    
    return 0;
}
