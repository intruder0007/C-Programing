#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * DATA STRUCTURES & ALGORITHMS
 * Topics: Linked Lists, Stacks, Queues, Sorting, Searching
 */

/* ============ LINKED LIST ============ */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* create_node(int data) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void insert_at_head(Node **head, int data) {
    Node *new_node = create_node(data);
    new_node->next = *head;
    *head = new_node;
}

void print_linked_list(Node *head) {
    printf("  List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void free_linked_list(Node *head) {
    while (head != NULL) {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
}

/* ============ STACK (using array) ============ */
typedef struct {
    int items[100];
    int top;
} Stack;

Stack* create_stack() {
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->top = -1;
    return s;
}

void push(Stack *s, int value) {
    if (s->top < 99) {
        s->items[++s->top] = value;
    }
}

int pop(Stack *s) {
    if (s->top >= 0) {
        return s->items[s->top--];
    }
    return -1;
}

void print_stack(Stack *s) {
    printf("  Stack (top to bottom): ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

/* ============ SORTING ALGORITHMS ============ */
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void quick_sort_helper(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        int pi = i + 1;
        
        quick_sort_helper(arr, low, pi - 1);
        quick_sort_helper(arr, pi + 1, high);
    }
}

void quick_sort(int arr[], int n) {
    quick_sort_helper(arr, 0, n - 1);
}

/* ============ SEARCHING ALGORITHMS ============ */
int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

void print_array(int arr[], int n) {
    printf("  Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("=== DATA STRUCTURES & ALGORITHMS ===\n\n");
    
    /* Linked List */
    printf("1. LINKED LIST:\n");
    Node *head = NULL;
    insert_at_head(&head, 30);
    insert_at_head(&head, 20);
    insert_at_head(&head, 10);
    print_linked_list(head);
    free_linked_list(head);
    
    /* Stack */
    printf("\n2. STACK:\n");
    Stack *stack = create_stack();
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    print_stack(stack);
    printf("  Popped: %d\n", pop(stack));
    print_stack(stack);
    free(stack);
    
    /* Sorting */
    printf("\n3. SORTING ALGORITHMS:\n");
    
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    
    printf("  Original: ");
    print_array(arr1, n);
    
    bubble_sort(arr1, n);
    printf("  After Bubble Sort: ");
    print_array(arr1, n);
    
    quick_sort(arr2, n);
    printf("  After Quick Sort: ");
    print_array(arr2, n);
    
    /* Searching */
    printf("\n4. SEARCHING ALGORITHMS:\n");
    int sorted_arr[] = {11, 12, 22, 25, 34, 64, 90};
    int search_target = 25;
    int n2 = 7;
    
    int linear_idx = linear_search(sorted_arr, n2, search_target);
    printf("  Linear Search (target %d): index %d\n", search_target, linear_idx);
    
    int binary_idx = binary_search(sorted_arr, n2, search_target);
    printf("  Binary Search (target %d): index %d\n", search_target, binary_idx);
    
    printf("\n=== COMPLEXITY NOTES ===\n");
    printf("Bubble Sort:    O(n²) time, O(1) space\n");
    printf("Quick Sort:     O(n log n) avg, O(n²) worst, O(log n) space\n");
    printf("Linear Search:  O(n) time\n");
    printf("Binary Search:  O(log n) time (requires sorted array)\n");
    
    return 0;
}
