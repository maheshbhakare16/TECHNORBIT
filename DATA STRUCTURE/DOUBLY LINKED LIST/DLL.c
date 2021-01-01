#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* prev;
    struct node* next;
};
struct node* CreateNode();
void CreateLinkedList(struct node**);
void DisplayLinkedList(struct node*);
void ReverseDisplay(struct node*);
void main()
{
    struct node* first = NULL;
    int choice;
    do
    {
        printf("------------------------------------ ************************ -------------------------------------------\n");
        printf("\n1) Create Linked List\n2) Display Linked List\n3) Reversed Linked List\n0) Exit\nEnter Your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: CreateLinkedList(&first);
                    break;
            case 2: DisplayLinkedList(first);
                    break;
            case 3: ReverseDisplay(first);
                    break;
        }
    }while(choice!=0);
}
struct node* CreateNode()
{
    struct node* newnode =  NULL;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        printf("Enter the data: ");
        scanf("%d",&(newnode->data));
        newnode->prev = NULL;
        newnode->next = NULL;
    }
    return newnode;
}
void CreateLinkedList(struct node** head)
{
    struct node* tempnode = *head;
    struct node* newnode = NULL;
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
        newnode->prev = tempnode;
    }
}
void DisplayLinkedList(struct node* head)
{
    printf("Linked List In Forward Order: ");
    while(head != NULL)
    {
        printf(" -> %d",head->data);
        head = head->next;
    }
}
void ReverseDisplay(struct node* head)
{
    while(head->next != NULL)
    {
        head = head->next;
    }
    printf("Linked List In Backward Order: ");
    while(head != NULL)
    {
        printf(" -> %d",head->data);
        head = head->prev;
    }
}
