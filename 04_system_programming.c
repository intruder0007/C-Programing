#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * SYSTEM PROGRAMMING CONCEPTS
 * Topics: File I/O, Process Management, Command Line Arguments
 * Note: Some features work on Linux/macOS; Windows has different APIs
 */

/* ============ FILE I/O ============ */
void file_io_example() {
    printf("\n1. FILE I/O OPERATIONS:\n");
    
    const char *filename = "test.txt";
    
    // Write to file
    FILE *file = fopen(filename, "w");
    if (file != NULL) {
        fprintf(file, "Hello, File I/O!\n");
        fprintf(file, "Line 2: This is a test.\n");
        fprintf(file, "Line 3: End of file.\n");
        fclose(file);
        printf("  ✓ File written successfully\n");
    }
    
    // Read from file
    file = fopen(filename, "r");
    if (file != NULL) {
        printf("  File contents:\n");
        char line[256];
        while (fgets(line, sizeof(line), file) != NULL) {
            printf("    %s", line);
        }
        fclose(file);
    }
    
    // Append to file
    file = fopen(filename, "a");
    if (file != NULL) {
        fprintf(file, "Appended line.\n");
        fclose(file);
        printf("  ✓ Content appended\n");
    }
    
    // Binary file I/O
    int data[5] = {10, 20, 30, 40, 50};
    file = fopen("data.bin", "wb");
    if (file != NULL) {
        fwrite(data, sizeof(int), 5, file);
        fclose(file);
        printf("  ✓ Binary data written\n");
    }
    
    file = fopen("data.bin", "rb");
    if (file != NULL) {
        int read_data[5];
        fread(read_data, sizeof(int), 5, file);
        printf("  Binary data read: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", read_data[i]);
        }
        printf("\n");
        fclose(file);
    }
}

/* ============ COMMAND LINE ARGUMENTS ============ */
void command_line_args(int argc, char *argv[]) {
    printf("\n2. COMMAND LINE ARGUMENTS:\n");
    printf("  Program name: %s\n", argv[0]);
    printf("  Total arguments: %d\n", argc);
    
    if (argc > 1) {
        printf("  Arguments passed:\n");
        for (int i = 1; i < argc; i++) {
            printf("    argv[%d] = %s\n", i, argv[i]);
        }
    } else {
        printf("  (No additional arguments provided)\n");
    }
}

/* ============ ENVIRONMENT VARIABLES ============ */
void environment_variables() {
    printf("\n3. ENVIRONMENT VARIABLES:\n");
    
    char *home = getenv("HOME");
    char *path = getenv("PATH");
    char *user = getenv("USER");
    
    if (home) printf("  HOME: %s\n", home);
    if (path) printf("  PATH: %s\n", path);
    if (user) printf("  USER: %s\n", user);
    if (!home && !path && !user) {
        printf("  (Note: Environment variables not available on Windows)\n");
    }
}

/* ============ DIRECTORY OPERATIONS ============ */
void directory_operations() {
    printf("\n4. DIRECTORY OPERATIONS:\n");
    
    // Get current working directory
    char cwd[256];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("  Current directory: %s\n", cwd);
    }
    
    // Create a test directory (may fail on Windows)
    #ifdef __unix__
    int result = mkdir("test_dir", 0755);
    if (result == 0) {
        printf("  ✓ Created test_dir\n");
    }
    #endif
}

/* ============ PROCESS INFORMATION ============ */
void process_information() {
    printf("\n5. PROCESS INFORMATION:\n");
    
    #ifdef __unix__
    pid_t pid = getpid();
    pid_t ppid = getppid();
    printf("  Process ID: %d\n", (int)pid);
    printf("  Parent Process ID: %d\n", (int)ppid);
    #else
    printf("  (Process ID functions not available on Windows)\n");
    #endif
}

/* ============ MEMORY INFO ============ */
void memory_management_info() {
    printf("\n6. DYNAMIC MEMORY & ALLOCATION PATTERNS:\n");
    
    // Array of structures
    typedef struct {
        char name[50];
        int id;
    } Employee;
    
    int num_employees = 3;
    Employee *employees = (Employee *)malloc(num_employees * sizeof(Employee));
    
    // Initialize
    strcpy(employees[0].name, "Alice");
    employees[0].id = 101;
    strcpy(employees[1].name, "Bob");
    employees[1].id = 102;
    strcpy(employees[2].name, "Charlie");
    employees[2].id = 103;
    
    printf("  Employees:\n");
    for (int i = 0; i < num_employees; i++) {
        printf("    %s (ID: %d)\n", employees[i].name, employees[i].id);
    }
    
    free(employees);
    printf("  ✓ Memory freed\n");
}

int main(int argc, char *argv[]) {
    printf("=== SYSTEM PROGRAMMING CONCEPTS ===\n");
    
    file_io_example();
    command_line_args(argc, argv);
    environment_variables();
    directory_operations();
    process_information();
    memory_management_info();
    
    printf("\n=== SYSTEM PROGRAMMING TIPS ===\n");
    printf("• Always check return values of system calls\n");
    printf("• Use fopen/fclose for file operations\n");
    printf("• Handle errors gracefully\n");
    printf("• Be aware of platform differences (Windows vs Unix)\n");
    printf("• Use strace/dtrace to debug system calls\n");
    
    return 0;
}
