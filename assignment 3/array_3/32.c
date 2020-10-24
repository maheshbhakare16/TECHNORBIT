/*
Title- Write a C program to count number of alphabates, spaces and words in given string.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
    char str[100];
    int j,i,space=0,alpha=0,count=0;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
//     logic to count spaces and alphabets
    for(j=0;str[j]!='\0';j++)
    {
        if(str[j]==32)
        {
            space++;
        }
        else
        {
            if((str[j]>=65 && str[j]<=90) || (str[j]>=97 && str[j]<=122))
            {
                alpha++;
            }
        }
    }
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
    count+=1;
    printf("spaces= %d\nalphabets= %d\nwords= %d\n",space,alpha,count);
}
