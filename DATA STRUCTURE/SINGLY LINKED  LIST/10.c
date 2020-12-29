

/*
Title- 10. Write a C program to sort student information in ascending order according to marks of student using singly linked list.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
#include<stdlib.h>

char* AcceptString();
struct node* CreateNode();
void CreateLinkedList(struct node**);
void DisplayLinkedList(struct node*);
void SortLinkedList(struct node*);

struct node
{
    int roll_no;
    char* name;
    char* address;
    float marks;
    struct node* next;
};



void main()
{
    struct node* first = NULL;
    int choice;
    do
    {
        printf("\n1) Create Linked List\n2) Display Linked List\n3) Sort Linked List\n4) Exit\nEnter the Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: CreateLinkedList(&first);
                    break;
            case 2: DisplayLinkedList(first);
                    break;
            case 3: SortLinkedList(first);
                    break;
        }
    }while(choice!=4);
    
}

char* AcceptString()
{
    int len = 1;
    char ch;
    char* str = NULL;
    str = (char*)malloc(sizeof(char));
    (*str) = '\0';
    scanf(" ");
    scanf("%c",&ch);
    while(ch != '\n')
    {
        len++;
        str = (char*)realloc(str, sizeof(char)+len);
        *(str+(len-2)) = ch;
        *(str+(len-1)) = '\0';
        scanf("%c",&ch);
    }
    return str;
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
        printf("Enter the Roll No. for student: ");
        scanf("%d",&(newnode -> roll_no));
        printf("Enter the Name for student: ");
        newnode->name = AcceptString();
        printf("Enter the Address for student: ");
        newnode->address = AcceptString();
        printf("Enter the marks for student: ");
        scanf("%f",&(newnode -> marks));
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
void DisplayLinkedList(struct node* head)
{
    while(head != NULL)
    {
        printf("\t|\t%d  \t|\t%s\t|\t%s\t|\t%f\t|\n",head->roll_no,head->name,head->address,head->marks);
        head = head -> next;
    }
    
}

void SortLinkedList(struct node* head)
{
    struct node* tempnode = NULL;
    char* str;
    int roll;
    float marks;
    while(head != NULL)
    {
        tempnode = head->next;
        while(tempnode != NULL)
        {
            if(head->marks > tempnode->marks)
            {
                roll = head->roll_no;
                head->roll_no = tempnode->roll_no;
                tempnode->roll_no = roll;
                
                str = head->name;
                head->name = tempnode->name;
                tempnode->name = str;
                
                str = head->address;
                head->address = tempnode->address;
                tempnode->address = str;
                
                marks = head->marks;
                head->marks = tempnode->marks;
                tempnode->marks = marks;
            }
            tempnode = tempnode->next;
        }
        head = head->next;
    }
}

 
