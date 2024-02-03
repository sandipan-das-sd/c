#include <stdio.h>

#define SIZE 5

struct CircularQueue {
    int queue[SIZE];
    int front, rear;
}CircularQueue cq;

void enqueue(struct CircularQueue *cq, int x) {
    if ((cq->rear + 1) % SIZE == cq->front) {
        printf("Queue is full\n");
    } else {
        cq->rear = (cq->rear + 1) % SIZE;
        cq->queue[cq->rear] = x;
        if (cq->front == -1) {
            cq->front = 0;
        }
    }
}

void dequeue(struct CircularQueue *cq) {
    if (cq->front == -1) {
        printf("Queue is empty\n");
    } else if (cq->front == cq->rear) {
        cq->front = cq->rear = -1;
    } else {
        cq->front = (cq->front + 1) % SIZE;
        printf("%d\n", cq->queue[cq->front]);
    }
}
void display(struct CircularQueue *cq) {
    if (cq->front == -1) {
        printf("Queue is empty\n");
    } else {
        int i = cq->front;
        printf("Queue: ");
        do {
            i = (i + 1) % SIZE;
            printf("%d ", cq->queue[i]);
        } while (i != cq->rear);
        printf("\n");
    }
}

//void display(struct CircularQueue cq) {
//    if (cq.front == -1) {
//        printf("Queue is empty\n");
//    } else {
//        int i = cq.front;
//        printf("Queue: ");
//        do {
//            i = (i + 1) % SIZE;
//            printf("%d ", cq.queue[i]);
//        } while (i != cq.rear);
//        printf("\n");
//    }
//}

int main() {
    struct CircularQueue cq;
    cq.front = cq.rear = -1;

    int choice, x;

    do {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &x);
                enqueue(&cq, x);
                break;
            case 2:
                dequeue(&cq);
                break;
            case 3:
                display(&cq);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}

