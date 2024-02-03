#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct  node *rlink;
    struct node *llink;
};
struct node *new_node,*temp,*head=NULL;
void insert_first(int data)
{
if(head==NULL)
{
printf("No existings nodes are there except new node.");
new_node=(struct node*)malloc(sizeof(struct node* ));
new_node->data=data;
new_node->llink=NULL;
new_node->rlink=NULL;
head=new_node;
if(head==new_node)
{
printf("Data added suceesfully...\n");
}
}
}
void insert_last(int data)
{
printf("Enter the data to insert\n");
scanf("%d",&data);
if(head==NULL)
{
new_node=(struct node*)malloc(sizeof(struct node* ));
new_node->data=data;
new_node->llink=NULL;
new_node->rlink=NULL;
head=new_node;
}
else
{
  while(temp->rlink!=NULL)
  {

      temp=temp->rlink;
  }
temp->rlink=new_node;
new_node->llink=temp;
}
}
void insert_at_specific_pos(int pos,int data)
{
while(temp->rlink!=pos-1)
{



if(pos==0||pos==1)
{
insert_first(data);
}
else
{
   temp->rlink=new_node;
   new_node=temp->rlink;
   new_node->rlink=temp->rlink->rlink;
   temp->rlink->rlink=new_node;
}
}
}
int main()
{
int n,data,pos;
do{
printf("1.Insert at first\n2.Insert at last\n3.Insert at specific position\n4.Delete first\n5.Delete last\n6.Delete at specific position\n7.Display\n8.Exit\n");
printf("Enter your choice:-\n");
scanf("%d",&n);
printf("You choose option %d",n);
switch(n)
{
case 1:
    printf("Enter the data to insert first\n");
    scanf("%d",&data);
    insert_first(data);
   display();
case 2:
    printf("Enter the data to insert last\n");
    scanf("%d",&data);
    insert_last(data);
    display();
case 3:
    printf("Enter the position to Insert data\n");
    scanf("%d",&pos);
    printf("Enter the data to insert at position %d\n",pos);
    scanf("%d",&data);
    display();
case 4:
    delete_first();
case 5:
    delete_last();
case 6:
    printf("Enter the position to delete\n");
    scanf("%d",&pos);
    delete_at_specific_pos(pos);
case 7:
    display();
case 8:
    printf("Thank you!!Process End\n");
    exit(0);
}
}while(n!=8);
}
