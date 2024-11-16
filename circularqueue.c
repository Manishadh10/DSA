#include <stdio.h>
#define SIZE 5 // Define the maximum size of the queue
int queue[SIZE]; // Array to hold the queue elements
int front = -1;  // Index of the front element
int rear = -1;   // Index of the rear element
// Function to check if the queue is full
int isFull() {
    return (front == 0 && rear == SIZE - 1) || (rear == (front - 1) % (SIZE - 1));
}
// Function to check if the queue is empty
int isEmpty() {
    return front == -1;
}
// Function to add an element to the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full! Cannot add more elements.\n");
    } else {
        if (front == -1) { // Initialize front and rear for the first element
            front = rear = 0;
        } else if (rear == SIZE - 1 && front != 0) {
            rear = 0; // Wrap around
        } else {
            rear++;
        }
        queue[rear] = value;
        printf("Enqueued: %d\n", value);
    }
}
// Function to remove an element from the queue
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot remove elements.\n");
    } else {
        printf("Dequeued: %d\n", queue[front]);
        if (front == rear) { // Reset when the last element is dequeued
            front = rear = -1;
        } else if (front == SIZE - 1) {
            front = 0; // Wrap around
        } else {
            front++;
        }
    }
}
// Function to display the elements of the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements: ");
        if (rear >= front) {
            for (int i = front; i <= rear; i++) {
                printf("%d ", queue[i]);
            }
        } else {
            for (int i = front; i < SIZE; i++) {
                printf("%d ", queue[i]);
            }
            for (int i = 0; i <= rear; i++) {
                printf("%d ", queue[i]);
            }
        }
        printf("\n");
    }
}
int main() {
    int choice, value;
    while (1) {
        printf("\nCircular Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
