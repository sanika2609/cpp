#include <stdio.h>

#define MAX_SIZE 100

// Global variables
int stack[MAX_SIZE];
int top = -1;

// Function to add an element to the stack
void push(int element) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }

    stack[++top] = element;
}

// Function to remove an element from the stack
void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return;
    }

    top--;
}

// Function to count the number of elements in the stack
int countElements() {
    return top + 1;
}

// Function to display the elements in the stack
void displayStack() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

// Main function
int main() {
    // Add elements to the stack
    push(1);
    push(2);
    push(3);

    // Display the original stack
    displayStack();

    // Remove an element from the stack
    pop();

    // Display the stack after removal
    displayStack();

    // Count the number of elements in the stack
    int elementCount = countElements();
    printf("Number of elements in the stack: %d\n", elementCount);

    return 0;
}
