#include <stdio.h>
#include <string.h>

/**
 * CORE LANGUAGE FUNDAMENTALS
 * Topics: variables, data types, operators, control flow, functions
 */

// Function pointer example
typedef int (*CompareFunc)(int a, int b);

// Basic function
int add(int a, int b) {
    return a + b;
}

// Function that uses function pointer
int apply_operation(int a, int b, CompareFunc func) {
    return func(a, b);
}

int max_func(int a, int b) {
    return a > b ? a : b;
}

int main() {
    // Data types and variables
    int age = 25;
    float salary = 50000.50;
    char name[50] = "John Doe";
    
    printf("=== CORE FUNDAMENTALS ===\n\n");
    
    // Operators
    printf("1. Arithmetic Operators:\n");
    printf("   10 + 5 = %d\n", 10 + 5);
    printf("   10 - 5 = %d\n", 10 - 5);
    printf("   10 * 5 = %d\n", 10 * 5);
    printf("   10 / 5 = %d\n", 10 / 5);
    printf("   10 %% 3 = %d\n\n", 10 % 3);
    
    // Control flow - if/else
    printf("2. Control Flow (if/else):\n");
    if (age >= 18) {
        printf("   Age %d: You are an adult\n\n", age);
    }
    
    // Loops - for
    printf("3. Loops (for):\n");
    printf("   Numbers 1-5: ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Loops - while
    printf("4. Loops (while):\n");
    printf("   Countdown: ");
    int count = 3;
    while (count > 0) {
        printf("%d ", count);
        count--;
    }
    printf("\n\n");
    
    // Arrays
    printf("5. Arrays:\n");
    int numbers[5] = {10, 20, 30, 40, 50};
    printf("   Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
    
    // Strings
    printf("6. Strings:\n");
    printf("   Name: %s\n", name);
    printf("   Length: %lu\n\n", strlen(name));
    
    // Structs
    printf("7. Structs:\n");
    struct Person {
        char name[50];
        int age;
        float height;
    };
    
    struct Person person = {"Alice", 30, 5.6};
    printf("   Person: %s, Age: %d, Height: %.1f\n\n", 
           person.name, person.age, person.height);
    
    // Function calls
    printf("8. Functions:\n");
    int result = add(15, 25);
    printf("   add(15, 25) = %d\n\n", result);
    
    // Function pointers
    printf("9. Function Pointers:\n");
    int result2 = apply_operation(10, 20, max_func);
    printf("   max(10, 20) = %d\n\n", result2);
    
    // Switch statement
    printf("10. Switch Statement:\n");
    int day = 3;
    switch (day) {
        case 1:
            printf("    Monday\n");
            break;
        case 2:
            printf("    Tuesday\n");
            break;
        case 3:
            printf("    Wednesday\n");
            break;
        default:
            printf("    Other day\n");
    }
    
    return 0;
}
