#include <stdio.h>
#include <stdlib.h>
#define size 20
int front = -1;
int rear = -1;
int i;
int cq[size];

int eq(int x) {
    if (front == -1 && rear == -1) 
	{
        printf("Queue is empty. You can insert\n");
        rear = (rear + 1) % size;
        cq[rear] = x;
    } 
	else 
	{
        if ((rear + 1) % size == front) 
		{
            printf("Queue is full. You can't insert\n");
        }
    }
}

void deq() 
{
    if (front == -1 && rear == -1) 
	{
        printf("Queue is empty. No element to delete\n");
    } 
	else 
	{
        front = (front + 1) % size;
        printf("The dequeued element is: %d\n", cq[front]);
    }
}
 
void display() 
{
    if (front == -1 && rear == -1) 
	{
        printf("Queue is empty. No element to display\n");
    } 
    
	{
        i = front;
        printf("Queue elements are:\n");
        do {
            printf("%d ", cq[i]);
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);
        printf("\n");
    }
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
                break;

            default:
                printf("Invalid option. Please select again.\n");
        }
    } while (option != 4);
    return 0;
}

