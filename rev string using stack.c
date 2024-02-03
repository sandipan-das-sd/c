#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 20
int top = -1;
char stack[size];

void push(char value);
char pop();
void display();
void rev();

int main() {
    int option;
    char str[size];

    do {
        printf("***Stack Menu***\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Reverse\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        getchar(); // Consume the newline character from previous input

        switch (option) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%c", &str[0]); // Read a single character
                getchar(); // Consume the newline character
                push(str[0]);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                rev();
                break;
            case 5:
                printf("Process ended. Thank you!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again!\n");
        }
    } while (option != 5);

    return 0;
}

void push(char value) {
    if (top == (size - 1)) {
        printf("Stack is full. No element to insert.\n");
    } else {
        top = top + 1;
        stack[top] = value;
    }
}

char pop() {
    if (top == -1) {
        printf("Stack is empty. No element to delete.\n");
        return '\0'; // Return a null character to indicate an error
    } else {
        char temp = stack[top];
        top = top - 1;
        printf("The popped element is %c\n", temp); // Print the popped character
        return temp;
    }
}

void display() {
    int i;
    if (top == -1) {
        printf("Stack is empty. No element to display.\n");
    } else {
        printf("Stack elements: ");
        for (i = 0; i <= top; i++) {
            printf("%c", stack[i]);
        }
        printf("\n");
    }
}

void rev() {
    char str[size];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    printf("The reverse string is: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

