#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int x) 
{
    if ((rear + 1) % SIZE == front) 
	{
        printf("Queue is full\n");
    } else {
        rear = (rear + 1) % SIZE;
        queue[rear] = x;
        if (front == -1) 
		{
            front = 0;
        }
    }
}
/*Important*/
void dequeue() 
{
    if (front == -1) {
        printf("Queue is empty\n");
    } else if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
        printf("%d\n", queue[front]);
    }
}

void display() 
{
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        int i = front;
        printf("Queue: ");
        do {
            i = (i + 1) % SIZE;
            printf("%d ", queue[i]);
        } while (i != rear);
        printf("\n");
    }
}

int main() 
{
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
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
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

