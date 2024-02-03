#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *llink;
    struct node *rlink;
};

struct node *nnode, *head = NULL, *temp, *prev=NULL;

int data, pos;

void insert_first(int data) {
    if (nnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
//create node
    nnode->data = data;
    nnode->llink = NULL;
    nnode->rlink = head;
    
    if (head != NULL) {
        head = nnode->rlink; // move the pointer to the next node
    }
    
    head = nnode; // address
}

void insert_last(int data) {
    if (nnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->llink = NULL;
    newnode->rlink = head;

    struct node *temp = head;
    
    while (temp->rlink != NULL) {
        temp = temp->rlink;
    }

    temp->rlink = newnode;
    newnode->llink = temp;
}

void insert_at_specific_pos(int pos, int data) {
    if (nnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    if (pos == 1 || pos == 0) {
        insert_first(data);
    }

    struct node *temp = head;
    int count = 1;

    while (count < pos - 1 && temp != NULL) {
        temp = temp->rlink;
        count++;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }

    nnode->llink = temp;
    nnode->rlink = temp->rlink;
    temp->rlink->llink = nnode;
    temp->rlink = nnode;
}

void delete_at_first() {
    if (nnode == NULL) {
        printf("Memory allocation failed>\n");
    } else if (head == NULL) {
        printf("List is empty.\n");
    } else {
        temp = head;
        head = temp->rlink;
        temp->rlink = NULL;
        free(temp);
    }
}

void delete_at_last() {
    if (nnode == NULL) {
        printf("Memory allocation failed>\n");
    } else if (head == NULL) {
        printf("List is empty.\n");
    } else {
        temp = head;
        
        while (temp->rlink != NULL) {
            temp = temp->rlink;
            prev=temp;
            prev = prev->rlink;
        }
        prev->rlink = NULL;
        free(temp);
    }
}

void delete_at_specific_pos(int pos) {
    if (pos == 0 || pos == 1) {
        delete_at_first();
    }

    temp = head;

    while (pos < pos - 1 && temp != NULL) {
        temp = temp->rlink;
    }

    prev = temp->rlink;
    temp->rlink = prev->rlink;
    prev->rlink = NULL;
    free(prev);
}

void display() {
	struct node*temp;
    // Add your display logic here
    temp=head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->rlink;
    }

    printf("NULL\n");
}


int main() {
    int opt;
    do {
        printf("1.Insert first\n2.Insert last\n3.Insert Specific pos\n4.Delete first\n5.Delete last\n6.Delete at spec pos\n7.Display\n8.Exit\n");
        printf("Enter your choice:-\n");
        scanf("%d", &opt);
        switch (opt) {
            // Add your switch case logic here
            case 1:
                printf("Enter the data to insert:-\n");
                scanf("%d", &data);
                insert_first(data);
                break;
            case 2:
                printf("Enter the data to insert:-\n");
                scanf("%d", &data);
                insert_last(data);
                break;
            case 3:
                printf("Enter the data to insert:-\n");
                scanf("%d", &data);
                printf("Enter the position:-\n");
                scanf("%d", &pos);
                insert_at_specific_pos(pos, data);
                break;
            case 4:
                delete_at_first();
                break;
            case 5:
                delete_at_last();
                break;
            case 6:
                printf("Enter the position to delete:-\n");
                scanf("%d", &pos);
                delete_at_specific_pos(pos);
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid option. Please try again.\n");
        
        }
    } while (opt != 8);

    return 0;
}

