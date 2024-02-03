#include <stdio.h>

#define SIZE 10

int deque[SIZE];
int front = -1, rear = -1;


void enqueueFront(int x) {
    if ((front == 0 && rear == SIZE - 1) || (rear + 1 == front)) {
        printf("Deque is full from front\n");
    } else {
        if (front == -1) {
            front = rear = 0;
        } else if (front == 0) {
            front = SIZE - 1;
        } else {
            front--;
        }
        deque[front] = x;
    }
}

void enqueueRear(int x) {
    if ((front == 0 && rear == SIZE - 1) || (rear + 1 == front)) {
        printf("Deque is full from rear\n");
    } else {
        if (front == -1) {
            front = rear = 0;
        } else if (rear == SIZE - 1) {
            rear = 0;
        } else {
            rear++;
        }
        deque[rear] = x;
    }
}

void dequeueFront() {
    if (front == -1) {
        printf("Deque is empty from front\n");
    } else {
        printf("Removed element from front: %d\n", deque[front]);
        if (front == rear) {
            front = rear = -1;
        } else if (front == SIZE - 1) {
            front = 0;
        } else {
            front++;
        }
    }
}

void dequeueRear() {
    if (front == -1) {
        printf("Deque is empty from rear\n");
    } else {
        printf("Removed element from rear: %d\n", deque[rear]);
        if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) {
            rear = SIZE - 1;
        } else {
            rear--;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Deque is empty\n");
    } else {
        int i = front;
        printf("Deque: ");
        do {
            printf("%d ", deque[i]);
            if (i == SIZE - 1) {
                i = 0;
            } else {
                i++;
            }
        } while (i != rear + 1);
        printf("\n");
    }
}

int main() {
    enqueueRear(5);
    enqueueRear(10);
    enqueueFront(3);
    display();
    dequeueFront();
    display();
    enqueueFront(7);
    enqueueRear(15);
    display();
    dequeueRear();
    display();

    return 0;
}

