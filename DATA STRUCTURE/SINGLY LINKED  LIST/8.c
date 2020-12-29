

/*
Title- 8. Write a C program to create two linked lists (B and C) from one linked
list(A) one of two(B) contains only even data from (A) and another contains
only odd data from (A).
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
#include<stdlib.h>

struct node* CreateNode();
void CreateLinkedList(struct node**);
void EvenOddSeperator(struct node**, struct node**, struct node**);
void DisplayLinkedList(struct node*, struct node*);

struct node
{
    int data;
    struct node* next;
};



void main()
{
    struct node *first = NULL, *even = NULL, *odd = NULL;
    int choice;
    do
    {
        printf("\n1) Create Linked List\n2) Seperate Even Odd\n3) Display Linked List\n4) Exit\nEnter the Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: CreateLinkedList(&first);
                    break;
            case 2: EvenOddSeperator(&first, &even, &odd);
                    break;
            case 3: DisplayLinkedList(even, odd);
                    break;
        }
    }while(choice!=4);
    
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

void EvenOddSeperator(struct node** head, struct node** even, struct node** odd)
{
    struct node *tempnode = NULL, *tempnode2 = NULL;
    if(*head == NULL)
    {
        printf("List List not available....\n");
    }
    else
    {
        while(*head != NULL)
        {
            tempnode2 = (*head)->next;
            if(((*head)->data)%2 == 0)
            {
                if(*even == NULL)
                {
                    *even = *head;
                    (*even)->next = NULL;
                }
                else
                {
                    tempnode = *even;
                    while(tempnode->next != NULL)
                    {
                        tempnode = tempnode->next;
                    }
                    tempnode->next = *head;
                    tempnode->next->next = NULL;
                }
            }
            else
            {
                if(*odd == NULL)
                {
                    *odd = *head;
                    (*odd)->next = NULL;
                }
                else
                {
                    tempnode = *odd;
                    while(tempnode->next != NULL)
                    {
                        tempnode = tempnode->next;
                    }
                    tempnode->next = *head;
                    tempnode->next->next = NULL;
                }
            }
            *head = tempnode2;
        }
    }
    
    
}

void DisplayLinkedList(struct node* even, struct node* odd)
{
    printf("\nEven data = [");
    while(even != NULL)
    {
        printf("%d, ",even->data);
        even = even->next;
    }
    printf("]\n");
    
    printf("\nOdd data = [");
    while(odd != NULL)
    {
        printf("%d, ",odd->data);
        odd = odd->next;
    }
    printf("]\n");
}























