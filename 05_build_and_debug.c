/**
 * 05_BUILD_AND_DEBUG.c
 * DEBUGGING & BUILD TOOLS
 * Topics: Makefiles, GDB, Code organization, Best practices
 * 
 * Compile with: gcc -g -Wall -Wextra 05_build_and_debug.c -o debug_example
 * Debug with: gdb ./debug_example
 * 
 * GDB Commands:
 *   break <line>       - Set breakpoint
 *   run                - Run program
 *   next/step          - Step through code
 *   print <variable>   - Print variable value
 *   continue           - Continue execution
 *   quit               - Exit GDB
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function to calculate factorial */
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

/* Function with a bug for debugging practice */
int buggy_division(int a, int b) {
    int result = a / b;  // Intentional: no zero check
    return result;
}

/* Corrected version */
int safe_division(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return -1;
    }
    return a / b;
}

/* Function demonstrating string operations */
void process_string(const char *str) {
    if (str == NULL) {
        printf("Error: NULL pointer\n");
        return;
    }
    
    printf("String: %s\n", str);
    printf("Length: %lu\n", strlen(str));
    printf("First char: %c\n", str[0]);
    printf("Last char: %c\n", str[strlen(str) - 1]);
}

/* Recursive function for debugging */
void print_numbers(int n, int max) {
    if (n > max) return;
    printf("%d ", n);
    print_numbers(n + 1, max);
}

/* Array manipulation */
void reverse_array(int arr[], int n) {
    int left = 0;
    int right = n - 1;
    
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main() {
    printf("=== BUILD TOOLS & DEBUGGING ===\n\n");
    
    /* Example 1: Simple calculation */
    printf("1. Factorial calculation:\n");
    int num = 5;
    int fact = factorial(num);
    printf("   %d! = %d\n\n", num, fact);
    
    /* Example 2: Safe division */
    printf("2. Division (with error checking):\n");
    int result = safe_division(10, 2);
    printf("   10 / 2 = %d\n", result);
    result = safe_division(10, 0);
    printf("\n");
    
    /* Example 3: String processing */
    printf("3. String processing:\n");
    process_string("Hello, World!");
    printf("\n");
    
    /* Example 4: Recursion */
    printf("4. Recursive function:\n");
    printf("   Numbers 1-10: ");
    print_numbers(1, 10);
    printf("\n\n");
    
    /* Example 5: Array reversal */
    printf("5. Array reversal:\n");
    int arr[] = {1, 2, 3, 4, 5};
    printf("   Original: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");
    
    reverse_array(arr, 5);
    printf("   Reversed: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n\n");
    
    /* Example 6: Memory allocation debugging */
    printf("6. Dynamic memory:\n");
    int *ptr = (int *)malloc(sizeof(int) * 3);
    if (ptr != NULL) {
        ptr[0] = 100;
        ptr[1] = 200;
        ptr[2] = 300;
        printf("   Allocated array: %d, %d, %d\n", ptr[0], ptr[1], ptr[2]);
        free(ptr);
        printf("   ✓ Memory freed\n");
    }
    
    printf("\n=== DEBUGGING TIPS ===\n");
    printf("1. Compilation flags:\n");
    printf("   -g: Include debugging symbols\n");
    printf("   -Wall: Show all warnings\n");
    printf("   -Wextra: Show extra warnings\n");
    printf("   -O0: No optimization (better for debugging)\n\n");
    
    printf("2. Valgrind (memory leak detection):\n");
    printf("   valgrind --leak-check=full ./program\n\n");
    
    printf("3. GDB Commands:\n");
    printf("   (gdb) break main\n");
    printf("   (gdb) run\n");
    printf("   (gdb) next / step\n");
    printf("   (gdb) print variable\n");
    printf("   (gdb) continue\n\n");
    
    printf("4. Common issues:\n");
    printf("   • Segmentation faults: NULL pointer access\n");
    printf("   • Memory leaks: Forgetting to free()\n");
    printf("   • Buffer overflows: Writing beyond array bounds\n");
    printf("   • Undefined behavior: Using uninitialized variables\n");
    
    return 0;
}
