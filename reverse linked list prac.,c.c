#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* reverseList(struct Node* head) {
    struct Node *prev = NULL, *current = head, *nextNode = NULL;
    
    while (current != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    
    head = prev;
    return head;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Allocate memory for nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1; // Assign data in first node
    head->next = second; // Link first node with the second node

    second->data = 2; // Assign data to second node
    second->next = third; // Link second node with the third node

    third->data = 3; // Assign data to third node
    third->next = NULL; // Third node points to NULL indicating the end of the list

    printf("Original Linked list: \n");
    printList(head); // Print the original list

    head = reverseList(head); // Reverse the linked list

    printf("Reversed Linked list: \n");
    printList(head); // Print the reversed list

    return 0;
}

