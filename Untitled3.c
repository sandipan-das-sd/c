#include<stdio.h>
#include<stdlib.h>
#define size 20
int top=-1;
int stack[size];
void push(int value);
void pop();
void display();
int main()
{
	int option,value;
	do
	{
		printf("***Stack Menu***\n");
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter your choice:-");
		scanf("%d",&option);
		switch(option){
		
		case 1:
			printf("Enter the value to insert:-\n");
			scanf("%d",&value);
			push(value);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("Process end... Thank you!!");
			exit(0);
		default:
			printf("Invalid format...");
		}
	} while(option!=4);
	return 0;
}
void push(int value)
{
	if(top==(size-1)){
		printf("Stack is full. No element to insert..\n");
	}
	else{
		top=top+1;
		stack[top]=value;
	}
}
void pop()
{
	if(top==-1){
		printf("Stack is empty. No eleemnt to delete\n");
	}
	else{
		top=top-1;
		printf("The popeed element is %d",stack[top]);
	}
	
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is full. No eleemnt to display\n");
	}
	else
	{
		for(i=0;i<=top;i++)
		{
			printf("%d",stack[i]);
		}
	}
}

