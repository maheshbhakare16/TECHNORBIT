

/*
Title- 8. Write a C program to print all Magic number from the given linked list.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/ 

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* CreateNode();
void CreateLinkedList(struct node**);
void DisplayLinkedList(struct node*);
void PrintMagicNumber(struct node*);

void main()
{
    struct node* first = NULL;
    int choice;
    
    do
    {
        printf("\n----------------************************-------------------------\n");
        printf("\n1) Create Linked List\n2) Display Linked List\n3) Check MAgic Number\n0) Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: CreateLinkedList(&first);
                    break;
            case 2: DisplayLinkedList(first);
                    break;
            case 3: PrintMagicNumber(first);
                    break;
        }
    }while(choice != 0);
}

struct node* CreateNode()
{
    struct node* newnode = NULL;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("memory not allocated ..... \n");
    }
    else
    {
        printf("enter data: ");
        scanf("%d",&(newnode->data));
        newnode->next = NULL;
    }
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
void DisplayLinkedList(struct node* head)
{
    while(head != NULL)
    {
        printf(" -> %d", head->data);
        head = head->next;
    }
}

void PrintMagicNumber(struct node* head)
{
    int num, sum, rev;
    while(head != NULL)
    {
        sum=0;
        rev=0;
        num = head->data;
        while(num != 0)
        {
            sum+= (num%10);
            num/=10;
        }
        num = sum;
        while(num != 0)
        {
            rev = (rev*10)+(num%10);
            num/=10;
        }
        if((sum*rev) == head->data)
        {
            printf("%d\t",head->data);
        }
        head = head->next;
    }
    printf("\n");
}
