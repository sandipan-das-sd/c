#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 20
int top = -1;
char stack[size];

void push(char value);
char pop();
void display();

int main() {
    int option;
    char str[size];

    do {
        printf("***String Reversal using Stack Menu***\n");
        printf("1. Enter String\n2. Reverse String\n3. Display Reversed String\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
        	int i;
            case 1:
                printf("Enter a string: ");
                scanf("%s", str);
                int len = strlen(str);
                for ( i = 0; i < len; i++) {
                    push(str[i]);
                }
                break;
            case 2:
                // Reverse the string
                printf("Reversed String: ");
                while (top != -1) {
                    printf("%c", pop());
                }
                printf("\n");
                break;
            case 3:
                printf("Reversed String: ");
                display();
                break;
            case 4:
                printf("Process ended. Thank you!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again!\n");
        }
    } while (option != 4);

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
        return temp;
    }
}

void display() {
	int i;
    if (top == -1) {
        printf("Stack is empty. No element to display.\n");
    } else {
        for ( i = top; i >= 0; i--) {
            printf("%c", stack[i]);
        }
        printf("\n");
    }
}

