#include<stdio.h>
#include<stdlib.h>
struct tree
{
    struct tree* left;
    int data;
    struct tree* right;
};
struct tree* CreateNode()
{
    struct tree* newnode = NULL;
    newnode = (struct tree*)malloc(sizeof(struct tree));
    if(newnode == NULL)
    {
        printf("Memory not allocated.....");
    }
    else
    {
        printf("Enter data for node: ");
        scanf("%d",&(newnode->data));
        newnode -> left = NULL;
        newnode -> right = NULL;
    }
    return newnode;
}

void CreateBST(struct tree** tempnode)
{
    struct tree* temp = NULL;
    struct tree* newnode = NULL;
    newnode = CreateNode();
    if(*tempnode == NULL)
    {
        *tempnode = newnode;
    }
    else
    {
        if(newnode->data < (*tempnode)->data)
        {
            if(((*tempnode)->left) == NULL)
            {
                (*tempnode)->left == newnode;
                return;
            }
            else
            {
                temp = (*tempnode)->left;
                CreateBST(&temp);
            }
        }
        else
        {
            if(((*tempnode)->right) == NULL)
            {
                (*tempnode)->right == newnode;
                return;
            }
            else
            {
                temp = (*tempnode)->right;
                CreateBST(&temp);
            }
        }
    }
}

void DisplayBST(struct tree* root)
{
    if(root != NULL)
    {
       printf("%d -> ",root->data);
       DisplayBST(root->left);
       DisplayBST(root->right);
    }
}

void main()
{
    struct tree* root =  NULL;
    int choice;
    
    do
    {
        printf("*************************************\n");
        printf("1. Create BST\n2. Display BST\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: CreateBST(&root);
                    break;
            case 2: printf("Preorder Traversal Of Tree is : ");
                    DisplayBST(root);
                    printf("\n");
                    break;
            case 3: printf("Exiting....\n");
                    break;
            default: printf("Enter correct Choice.....\n");
        }
    }while(choice != 3);
}
