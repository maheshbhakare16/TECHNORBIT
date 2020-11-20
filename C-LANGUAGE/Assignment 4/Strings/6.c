
/*
Title- Write a C program to reverse a given string as below.
Eg:
Input String:
India is my country
Output String:
aidnI si ym yrtnuoc
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
 


#include<stdio.h>
void main()
{
    char str[100],temp;
    int i,j,k;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);

    
//     logic for swapping each word at its place

    for(j=0;str[j]!='\0'; )
    {
        for(i=j;str[i]!=32 && str[i]!='\0';i++);
        i--;
        if(str[i]==10)
        {
            i--;
        }
        k=i;
        for( ;j<=i;j++,i--)
        {
            temp=str[j];
            str[j]=str[i];
            str[i]=temp;
        }
        j=k;
        j++;
        if(str[j]==32)
        {
            for( ;str[j]==32;j++);
        }
        else
        {
            if(str[j]==10)
            {
                j+=2;
            }
            else
            {
                j++;
            }
        }
    }
    printf("final output is: %s\n",str);  
} 
