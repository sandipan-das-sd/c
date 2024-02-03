#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int cq[MAX_SIZE];
int front = -1;
int rear = -1;

int isFull() {
    return (front == (rear + 1) % MAX_SIZE);
}

int isEmpty() {
    return (front == -1 && rear == -1);
}

void eq(int x) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX_SIZE;
    }

    cq[rear] = x;
    printf("%d has been enqueued.\n", x);
}

void deq() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }

    printf("%d has been dequeued.\n", cq[front]);

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX_SIZE;
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }

    int i = front;
    printf("Queue elements are:\n");

    do {
        printf("%d ", cq[i]);
        i = (i + 1) % MAX_SIZE;
    } while (i != (rear + 1) % MAX_SIZE);

    printf("\n");
}

int main() {
    int x, option;

    do {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d", &option); // Read user's choice

        switch (option) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &x);
                eq(x);
                break;

            case 2:
                deq();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Thank you!!\n");
                exit(0);

            default:
                printf("Invalid option. Please select again.\n");
        }

    } while (option != 4);

    return 0;
}

