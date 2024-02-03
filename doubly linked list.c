#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *rlink;
    struct Node *llink;
    int data;
};

struct Node *head = NULL;

void insertFirst(int data)
{
	//Node creation part
    struct Node *nnode = (struct Node *)malloc(sizeof(struct Node));
    if (nnode == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }
    nnode->data = data;
    nnode->rlink = head;
    nnode->llink = NULL;
   //insert first 
   /* Step 2: Insert the new node at the
    beginning of the linked list*/
    if (head != NULL)
    {
        head->llink = nnode;
        /*nnode is being inserted at the beginning of the linked list,
		 and it is positioned to the right of the existing head*/
    }
    else
    {
    	//head is NULL means no existing noodes are there
        head = nnode;
    }
}

void insertLast(int data)
{
    struct Node *nnode = (struct Node *)malloc(sizeof(struct Node));
    if (nnode == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }
    nnode->data = data;
    nnode->rlink = NULL;
    nnode->llink = NULL;

    if (head == NULL)
    {
        // If the list is empty, make the new node the head
        head = nnode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->rlink != NULL)
        {
            temp = temp->rlink;
        }
        temp->rlink = nnode;
        nnode->llink = temp;
    }
}

void insertAtSpecificPos(int data, int pos)
{
    struct Node *nnode = (struct Node *)malloc(sizeof(struct Node));
    if (nnode == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }
    nnode->data = data;
    nnode->llink = NULL;
    nnode->rlink = NULL;

    if (pos == 0 || pos == 1)
    {
        insertFirst(data);
        return;
    }

    struct Node *temp = head;
    int count = 1;
    while (count < pos - 1 && temp != NULL)
    {
        temp = temp->rlink;
        count++;
    }

    if (temp == NULL)
    {
        printf("Invalid position.\n");
        free(nnode);
        return;
    }
    
    nnode->rlink = temp->rlink;
	 /*the adrees of the next node is stored at the
	  right lik of the new node
	   |ll |2 (nn)| rl  (200)|---> | ll|3 |rl |
	                                   (200) */
    if (temp->rlink != NULL) //means its says if the the next node is not null means the end nodes
    {

        temp->rlink->llink = nnode; //The adrees of new node is stored at the left link of the next to the new node
    }
    else
    {
	/* The adress of the new node is stored at the next node of the new node
	 and the adrees of the temp is stred at the left link of the node */
    temp->rlink = nnode;
    nnode->llink = temp;
   }

void deleteFirst()
{
    if (head == NULL) //no nodes
    {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = head;
    head = head->rlink; //move the head pointer to the next
    if (head != NULL)
    {
        head->llink = NULL; //as it is doubly remove the "<--- " link by head->llink=NULL
    }
    free(temp);
}

void deleteLast()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = head;
    while (temp->rlink != NULL)
    {
        temp = temp->rlink;
    }
    if (temp->llink != NULL)//  if the previous node of last node is not null
    {
        temp->llink->rlink = NULL;
		/* temp is pointing the last node; now temp of llink means the llink of last node that is poining the previous node oof last ode suppose if the llink
		 of last node is orr the last node is like way |400|2|NULL now the llink of last node is 400 that is pointing
		  the previous node supose the the adrees 
		  of previous node is 400
		  Let assume the node is 
		  |400|4|150|--->|200|2|NULL|<---.
		   (200)          (150)          .
		                  (temp)         .
		                                 .
										 .
										(150) 
		  
		  
		  temp->llink->rlink  (the r link of prev node of the last node)
		  */
    }
    else
    {
        head = NULL;
    }
    free(temp);
}

void deleteAtSpecificPos(int pos)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head;
    int count = 1;
    while (count < pos && temp != NULL)
    {
        temp = temp->rlink;
        count++;
    }

    if (temp == NULL) //because if temp null it will be last position or invalid
    {
        printf("Invalid position.\n");
        return;
    }

    if (temp->llink != NULL)
    {
    	/*Now temp is poinitng a deleted node and temp->llink this points a prev node of deletd node and temp->llink->rlink points 
		the r lin of that previous node now we store the adrees of the next node from the dleted node in the r link of the prev node 
		of that particular node "---> " link is conncted
		from deletd node  prev node rlink 
		to 
		deletd node next node lef link
		         .-------->------->---.
		         .                    .
		         .                    .
		|200|2|150|-->|100|7|150|-->|100|9|NULL
		    (100)          (500)       (150)
		                (Delted Node)
		                            
			
		*/
		
        temp->llink->rlink = temp->rlink;
    }
    else
    {
        head = temp->rlink;
    }

    if (temp->rlink != NULL)
    {
    /* now the adrees of deletd node
	 left link is stored atthe left link 
	 of the deletd node next node
	 <--- link conncted from the deletd node
	  next node left part to deletd node prev node right part
	  
	 |200|2|150|-->|100|7|150|-->|100|9|NULL
		    (100)          (500)       (150)
		        .         (Delted Node)
		        .                     .
				------------>---->----->
		*/
	
        temp->rlink->llink = temp->llink;
    }

    free(temp);
    
}

void display()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->rlink;
    }
    printf("\n");
}

int main()
{
    int choice, data, pos;

    while (1)
    {
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at specific position\n");
        printf("4. Delete from beginning\n");
        printf("5. Delete from end\n");
        printf("6. Delete from specific position\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to insert at beginning: ");
            scanf("%d", &data);
            insertFirst(data);
            break;
        case 2:
            printf("Enter data to insert at end: ");
            scanf("%d", &data);
            insertLast(data);
            break;
        case 3:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            printf("Enter position: ");
            scanf("%d", &pos);
            insertAtSpecificPos(data, pos);
            break;
        case 4:
            deleteFirst();
            printf("Deleted from beginning.\n");
            break;
        case 5:
            deleteLast();
            printf("Deleted from end.\n");
            break;
        case 6:
            printf("Enter position: ");
            scanf("%d", &pos);
            deleteAtSpecificPos(pos);
            printf("Deleted from position %d.\n", pos);
            break;
        case 7:
            printf("Linked list: ");
            display();
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
