
/*
Title- Write a C program to accept string with multiple spaces from user and print it with a sinlge space as
a delimiter.
Eg:
Input String:
_____India_____is_my_________country___________________
Output String:
India_is_my_country
(Consider _ as space)
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
 


#include<stdio.h>
void main()
{
    char str[100];
    int i,j;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    
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
    
    
//    to remove all the spaces at start and end
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
    printf("%s\n",str);
}
