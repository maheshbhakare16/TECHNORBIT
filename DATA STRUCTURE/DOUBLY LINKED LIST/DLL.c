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
void InsertAtFirst(struct node**);
void InsertAtLast(struct node**);
void InsertAtPosition(struct node**);
void DeleteAtFirst(struct node**);
void DeleteAtLast(struct node**);
void DeleteAtPosition(struct node**);

void main()
{
    struct node* first = NULL;
    int choice;
    do
    {
        printf("\n------------------------------------ ************************ -------------------------------------------\n");
        printf("\n1) Create Linked List\n2) Display Linked List\n3) Reversed Linked List\n4) Insert at First\n5) Insert At Last\n6) Insert At Position\n7) Delete At First\n8) Delete At Last\n9) Delete At Position\n0) Exit\nEnter Your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: CreateLinkedList(&first);
                    break;
            case 2: DisplayLinkedList(first);
                    break;
            case 3: ReverseDisplay(first);
                    break;
            case 4: InsertAtFirst(&first);
                    break;
            case 5: InsertAtLast(&first);
                    break;
            case 6: InsertAtPosition(&first);
                    break;
            case 7: DeleteAtFirst(&first);
                    break;
            case 8: DeleteAtLast(&first);
                    break;
            case 9: DeleteAtPosition(&first);
                    break;
        }
    }while(choice!=0);
}
int CountNode(struct node* head)
{
    int count = 0;
    while(head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
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
void InsertAtFirst(struct node** head)
{
    struct node* newnode = NULL;
    if(*head == NULL)
    {
        CreateLinkedList(head);
    }
    else
    {
        newnode = CreateNode();
        newnode->next = *head;
        (*head)->prev = newnode;
        *head = newnode;
    }
    
}
void InsertAtLast(struct node** head)
{
    CreateLinkedList(head);
}
void InsertAtPosition(struct node** head)
{
    struct node* tempnode = *head;
    struct node* newnode = NULL;
    int n,pos,i;
    n= CountNode(*head);
    printf("enter the position where you want to insert a new node: ");
    scanf("%d",&pos);
    if(pos == 1)
    {
        InsertAtFirst(head);
    }
    else if(pos == n+1)
    {
        InsertAtLast(head);
    }
    else if(pos < 1 || pos > n+1)
    {
        printf("Invalid Position....Please Enter Position Again...\n");
        InsertAtPosition(head);
    }
    else if(pos > 1 && pos < n+1)
    {
        newnode = CreateNode();
        for(i = 1; i<pos;i++)
        {
            tempnode= tempnode->next;
        }
        newnode->next = tempnode;
        newnode->prev = tempnode->prev;
        tempnode->prev->next = newnode;
        tempnode->prev = newnode;
    }
}

void DeleteAtFirst(struct node** head)
{
    struct node* tempnode = *head;
    if(*head == NULL)
    {
        printf("Linked List not Available....\n");
    }
    else
    {
        *head = (*head)->next;
        (*head)->prev = NULL;
        free(tempnode);
        tempnode = NULL;
    }
}
void DeleteAtLast(struct node** head)
{
    struct node* tempnode = *head;
    if(*head == NULL)
    {
        printf("Linked List not Available...\n");
    }
    else if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        while(tempnode->next != NULL)
        {
            tempnode = tempnode->next;
        }
        tempnode->prev->next = NULL;
        free(tempnode);
        tempnode = NULL;
    }
}
void DeleteAtPosition(struct node** head)
{
    struct node* tempnode = *head;
    int n,pos,i;
    printf("Enter the position from where you want to delete element: ");
    scanf("%d",&pos);
    n = CountNode(*head);
    if(pos == 1)
    {
        DeleteAtFirst(head);
    }
    else if(pos == n)
    {
        DeleteAtLast(head);
    }
    else if(pos > 1 && pos < n)
    {
        for( i = 1; i<pos;i++)
        {
            tempnode = tempnode->next;
        }
        tempnode->next->prev = tempnode->prev;
        tempnode->prev->next = tempnode->next;
        free(tempnode);
        tempnode = NULL;
    }
    else if(pos < 1 || pos > n)
    {
        printf("Please enter the valid position...\n");
        DeleteAtPosition(head);
    }
}
