

/*
Title- 5. Write a C program to find number of occurrence of given number in given
linked list.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>

struct node* CreateNode();
void CreateLinkedList(struct node**);
void ElementOccurence(struct node*);

struct node
{
    int data;
    struct node* next;
};


void main()
{
    struct node* first = NULL;
    int choice;
    do
    {
        printf("\n--------------------------******************************----------------------------\n");
        printf("1) Create Linked List\n2) Element Occurance\n3) Exit\nEnter your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: CreateLinkedList(&first);
                    break;
            case 2: ElementOccurence(first);
                    break;
        }
    }while(choice != 3);
}


struct node* CreateNode()
{
    struct node* newnode = NULL;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("Sorry,Memory not allocated... Please close the other applications or restart your computer and try again...\n");
    }
    else
    {
        printf("Enter the data for newnode: ");
        scanf("%d",&(newnode -> data));
        newnode -> next = NULL;
    }
    return newnode;
}


void CreateLinkedList(struct node** head)
{
    struct node* newnode = NULL;
    struct node* tempnode = *head;
    newnode = CreateNode();
    if(*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        while(tempnode->next != NULL)
        {
            tempnode = tempnode->next;
        }
        tempnode->next = newnode;
    }
}
void ElementOccurence(struct node* head)
{
    int element,count=0;
    if(head == NULL)
    {
        printf("Linked List not Created ..... Please Create Linked List.....\n");
    }
    else
    {
        printf("Please enter the element whose occurnces you want to count: ");
        scanf("%d",&element);
        while(head != NULL)
        {
            if(element == head->data)
            {
                count++;
            }
            head = head -> next;
        }
        printf("Occurances of Element is : %d\n",count);
    }
}
