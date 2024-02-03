#include <stdio.h>
#define size 5

struct cq
{
    int cq[size];
    int front;
    int rear;
};

void enqueue(struct cq *cq, int x)
{
    if (cq->front == -1 && cq->rear == -1)
    {
        printf("Queue is empty.\nYou can insert element\n");

        cq->rear = (cq->rear + 1) % size;
        cq->cq[cq->rear] = x;
        cq->front = 0;
    }
    else
    {
        if (cq->rear == (cq->front + 1) % size)
        {
            printf("Queue is full\n");
        }
    }
}

void dequeue(struct cq *cq)
{
    if (cq->front == -1 && cq->rear == -1)
    {
        printf("Queue is empty. No element to delete\n");
    }
    else
    {
        cq->front = (cq->front + 1) % size;
        printf("%d", cq->cq[cq->front]);
    }
}

void display(struct cq *cq)
{
    int i = cq->front;

    printf("The queue element is:\n");
    do
    {
        printf("%d", cq->cq[i]);
        i = (i + 1) % size;
    } while (i != (cq->rear + 1) % size);
}

int main()
{
    struct cq cq;
    cq.front = -1;
    cq.rear = -1;

    int option, x;
    do
    {

        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter the value to insert:\n");
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
            return 0;
        }
    } while (option != 4);
}

