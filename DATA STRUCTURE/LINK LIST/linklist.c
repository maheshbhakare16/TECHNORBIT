#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};


// -------------------- FUNCTION TO CREATE NODE -----------------
struct node* CreateNode()
{
    struct node* newnode = NULL;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode != NULL)
    {
        printf("Enter the data for newnode: ");
        scanf("%d",&(newnode->data));
        newnode->next = NULL;
    }
    else
    {
        printf("Memory not allocateed .....\n");
    }
    return newnode;
}
// ------------ FUNCTION TO COUNT NODES ---------------------------
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


// ---------------------- FUNCTION TO CREATE LINKED LIST(MAKES LINKING OF NODES) --------------------
void CreateLinkedList(struct node** head)
{
    struct node* newnode;
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


// -------------------------- FUNCTION TO DISPLAY LINKED LIST -----------
void DisplayLinkedList(struct node* tempnode)
{
    printf("Our Linked List is: ");
    while(tempnode != NULL)
    {
        printf(" -> %d",tempnode->data);
        tempnode = tempnode->next;
    }
    printf("\n");
}


// ----------------------- FUNCTION TO INSERT NODE AT FIRST ----------------------
void InsertAtFirst(struct node** head)
{
    struct node* newnode = NULL;
    newnode = CreateNode();
    newnode -> next = *head;
    *head = newnode;
}


// --------------------- FUNCTION TO INSERT NODE AT LAST -------------------
void InsertAtLast(struct node** head)
{
    CreateLinkedList(head); //if we call CreateLinkedList then we create node and att it to the last of previiously created linked list...
}

// ------------------- FUNCTION TO INSERT AT POSITION -------------------------------
void InsertAtPosition(struct node** head)
{
    struct node* newnode = NULL;
    struct node* tempnode = *head;
    int pos,n,i;
    printf("Enter the position where you want to add new node: ");
    n = CountNode(*head);
    scanf("%d",&pos);
    if(pos == 1)
    {
        InsertAtFirst(head);
    }
    else
    {
        if(pos == n+1)
        {
            InsertAtLast(head);
        }
        else 
        {
            if(pos < 1 && pos > n+1)
            {
                printf("Enter valid position .....");
                InsertAtPosition(head);
            }
            else
            {
                if(pos > 1 && pos < n+1)
                {
                    newnode = CreateNode();
                    for(i=1;i<pos-1;i++)
                    {
                        tempnode = tempnode->next;
                    }
                    newnode->next = tempnode->next;
                    tempnode->next = newnode;
                }
            }
        }
    }
}



// ------------------------- MAIN FUNCTION ---------------------------------
void main()
{
    int choice;
    struct node* first=NULL;
    do
    {
        printf(" --------------------------------- ***************** ----------------------------\n\n");
        printf("1) Create Link List\n2) Display Link List\n3) Insert At First\n4) Insert At Last\n5) Insert At Position\n0) Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: CreateLinkedList(&first); // &first = to make change at the address of first
                    break;
            case 2: DisplayLinkedList(first); // first = to make copy of first
                    break;
            case 3: InsertAtFirst(&first);
                    break;
            case 4: InsertAtLast(&first);
                    break;
            case 5: InsertAtPosition(&first);
                    break;
        }
    }while(choice != 0);
}
