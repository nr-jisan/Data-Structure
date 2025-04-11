#include <stdio.h>

int queue[5]; 
int front = -1, rear = -1;
int size = 5;

void enqueue(int value) {
    // If the queue is full
    if ((rear + 1) % size == front) {
        printf("Queue is full! Cannot insert %d.\n", value);
        return;
    }

    // If the queue is empty
    if (front == -1) {
        front = 0;
    }

    // Move rear pointer in circular manner
    rear = (rear + 1) % size;
    queue[rear] = value;
    printf("%d added to the queue.\n", value);
    printf("Front index: %d & Rear index: %d",front, rear);
}

void dequeue() {
    // If the queue is empty
    if (front == -1) {
        printf("Queue is empty! No element to remove.\n");
        return;
    }

    printf("%d removed from the queue.\n", queue[front]);

    // If there's only one element in the queue, reset both pointers
    if (front == rear) {
        front = rear = -1;
    } else {
        // Move front pointer in circular manner
        front = (front + 1) % size;
    }
    printf("Front index: %d & Rear index: %d",front, rear);
}

void display() {
    // If the queue is empty
    if (front == -1) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % size;
    }
    printf("%d\n", queue[rear]);  // Print the last element
}

int main() {
    int choice, value;

    while (1) {
        printf("\nQueue Menu:\n");
        printf("1. Insert (Enqueue)\n");
        printf("2. Delete (Dequeue)\n");
        printf("3. Show (Display)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 0:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please enter 1, 2, 3, or 0.\n");
        }
    }
}
