#include <stdio.h>

int top = -1;
int size;
int stack[100];

int empty() {
    return top == -1;
}

int full() {
    return top == size - 1;
}

void push(int data) {
    if (full()) {
        printf("Stack is Full\n");
        return;
    }
    top++;
    stack[top] = data;
}

int pop() {
    if (empty()) {
        printf("Stack is Empty\n");
        return -1; // Indicating empty stack
    }
    return stack[top--]; // Return the element at top, then decrement top
}

int peek() {
    if (empty()) {
        printf("Stack is Empty\n");
        return -1;
    }
    return stack[top];
}

void clearStack() {
    top = -1;
    printf("Stack has been cleared..!!!\n");
}

int main() {
    int n, data;
    printf("Enter your stack size (max 100): ");
    scanf("%d", &n);

    if (n > 100) {
        printf("Size exceeds maximum limit. Setting size to 100\n");
        size = 100;
    } else {
        size = n;
    }

    printf("Enter stack elements (enter 0 to stop entering elements):\n");
    while (1) {
        printf("Push element: ");
        scanf("%d", &data);
        
        if (data == 0) {
            break; // Exit the loop when the user enters 0
        }

        push(data); // Push the element to the stack
    }

    int choice;
    int loop = 1;
    while (loop) {
        printf("\nChoose an option:\n");
        printf("1. Pop element\n");
        printf("2. Peek top element\n");
        printf("3. Clear stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n\nPopping: %d\n\n", pop());
                break;
            case 2:
                printf("\n\nTop is: %d\n\n", peek());
                break;
            case 3:
                clearStack();
                break;
            case 4:
                printf("\n\nExiting program.\n\n");
                loop =0; // Set flag to stop the loop
                break;
            default:
                printf("\n\nInvalid choice. Please try again.....!!!\n\n");
        }
    }

    return 0;
}
/*
Md. Naimur Rahman Jisan
UG02-63-23-030
Batch 63rd
Computer Science & Engineering
State University of Bangladesh
*/
