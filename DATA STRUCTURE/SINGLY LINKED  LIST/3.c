

/*
Title- 3. Write a C program to create two singly linked list and merge it in one singly linked list.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>

struct node* CreateNode();
void CreateLinkedList(struct node**);
void MergeLinkedList(struct node*, struct node*, struct node**);
void DisplayLinkedList(struct node*);

struct node 
{
    int data;
    struct node* next;
};

void main()
{
    struct node *first = NULL, *second = NULL, *third = NULL;
    int choice;
    do
    {
        printf("\n----------------------------***********************----------------------------\n");
        printf("1)Create first Linked List\n2) Create second Linked List\n3) Merge Linked List\n4) Display Merged Linked List\n5) Display Original Linked List\n6) exit\nEnter your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: CreateLinkedList(&first);
                    break;
            case 2: CreateLinkedList(&second);
                    break;
            case 3: MergeLinkedList(first, second, &third);
                    break;
            case 4: DisplayLinkedList(third);
                    break;
            case 5: DisplayLinkedList(first);
                    DisplayLinkedList(second);
                    break;
        }
    }while(choice!=6);
}


struct node* CreateNode()
{
    struct node* newnode = NULL;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("Sorry, Memory not allocated..., Please close some other application or restart your computer and try again....");
    }
    else
    {
        newnode->next = NULL;
    }
    return newnode;
}

void CreateLinkedList(struct node** head)
{
    struct node *newnode = NULL,*tempnode = *head;
    newnode = CreateNode();
    if(newnode != NULL)
    {
        printf("Enter the value for newnode: ");
        scanf("%d",&(newnode->data));
    }
    
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

void MergeLinkedList(struct node* first, struct node* second, struct node** third)
{
    struct node* tempnode = NULL;
    while(*third != NULL)
    {
        tempnode = (*third) ->next;
        free(*third);
        *third = tempnode;
    }
    while(first != NULL)
    {
        if(*third == NULL)
        {
            *third = CreateNode();
            (*third)->data = first->data;
        }
        else
        {
            tempnode = *third;
            while(tempnode->next != NULL)
            {
                tempnode = tempnode->next;
            }
            tempnode->next = CreateNode();
            tempnode->next->data = first->data;
        }
        first = first->next;
    }
    while(second != NULL)
    {
        if(*third == NULL)
        {
            *third = CreateNode();
            (*third)->data = second->data;
        }
        else
        {
            tempnode = *third;
            while(tempnode->next != NULL)
            {
                tempnode = tempnode->next;
            }
            tempnode->next = CreateNode();
            tempnode->next->data = second->data;
        }
        second = second->next;
    }
    printf("Linked List Merged Successfully.....\n");
}

void DisplayLinkedList(struct node* head)
{
    printf("Your Linked List is: ");
    while(head!= NULL)
    {
        printf(" -> %d",head->data);
        head = head->next;
    }
    printf("\n");
}
























