/*
Title- Write a C program which accept sentence from user and position from user and print the word at
that position.
Eg:
Input String:
India is my country
Input Position:
3
Output String:
my
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
 


#include<stdio.h>
void main()
{
    char str[100];
    int i,j,count=0,n,flag=0;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("enter the no. of word which you want to print from string: ");
    scanf("%d",&n);
    
//     removing multiple spaces
    for(j=0;str[j]!='\0';j++)
    {
        if(str[j]==32 && str[j+1]==32)
        {
            for(i=j;str[i]!='\0';i++)
            {
                str[i]=str[i+1];
            }
            
        }
        if(str[j]==32 && str[j-1]==32 && j!=0)
        {
            j-=2;
            
        }   
    }
    
    
//    to remove all the remaining spaces at start and end
    if(str[0]==32)
    {
        for(j=0;str[j]!='\0';j++)
        {
            str[j]=str[j+1];
        }
    }
    if(str[0]==32)
    {
        
    }
    else
    {
        for(j=0;str[j]!='\0';j++);
        if(str[j-1]==10 && str[j-2]==32)
        {
            j--;
            str[j-1]=str[j];
            str[j]=str[j+1];
        }
        if(str[j-1]==32&& str[j]=='\0')
        {
            str[j-1]=str[j];
        }
    }
    
//     to  count the characters in a word

    for(j=0;str[j]!='\0'; )
    {
        for(i=j;str[i]!=32 && str[i]!='\0';i++);
        i--;
        if(str[i]==10)
        {
            i--;
        }
        count++;
        if(count==n)
        {
            printf("word is: ");
            for( ;j<=i;j++)
            {
                printf("%c",str[j]);
            }
            printf("\n");
            flag=1;
            break;
        }
        j=i;
        if(str[j+1]==32 || str[j+1]==10)
        {
            j+=2;
        }
        else
        {
            j++;
        }
        
    }
    if(flag==0)
    {
        printf("less words in the string\n");
    } 
}
    
 
