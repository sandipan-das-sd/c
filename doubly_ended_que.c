#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* link;  // next node in the list
    struct node* rlink; // right link (points to the next node in a doubly linked list)
    struct node* llink; // left link (points to the previous node in a doubly linked list)
} node;

node* createNode(int data) {
    node* newNode = (node*)malloc(sizeof(node));
    if (newNode == NULL) {
        printf("Memory allocation error\n");
        exit(1);
    }
    newNode->data = data;
    newNode->link = NULL;
    newNode->rlink = NULL;
    newNode->llink = NULL;
    return newNode;
}

void insertLast(node** st, int data) {
    node* ptr = createNode(data);

    if (*st == NULL) {
        *st = ptr;
    } else {
        node* p = *st;
        while (p->rlink != NULL) {
            p = p->rlink;
        }
        ptr->llink = p;
        p->rlink = ptr;
    }
}

int main() {
    node* st = NULL;
    insertLast(&st, 1);
    insertLast(&st, 2);
    insertLast(&st, 3);

    // Print the doubly linked list
    node* p = st;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->rlink;
    }

    // Free memory
    while (st != NULL) {
        p = st;
        st = st->rlink;
        free(p);
    }

    return 0;
}

