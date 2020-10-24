/*
Title- Write a program which accept sentence from user and print number of words from that sentence.
Input String:
India_is_my_country
Output:
4
Input String:
______India______is____my____country____ (Consider _ as space)
Output:
4
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    char str[100];
    int i,j,count=0;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    
    
    
//     logic to remove extra spaces
    
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
    
// logic to count words in sentence


    for(j=0;str[j]!='\0';j++)
    {
        if(str[j]==32)
        {
            count++;
        }
    }
    printf("the total no. of words is a sentence are: %d\n",count+1);
}
    
