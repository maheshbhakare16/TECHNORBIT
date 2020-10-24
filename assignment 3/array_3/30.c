/*
Title- Write a C program which accept string from user and reverse words from that string which are of
even length.
Eg:
Input String:
India is my country. I love my country.
Output String:
India si ym .yrtnuoc I evol ym . Yrtnuoc
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/



#include<stdio.h>
void main()
{
    char str[100],temp;
    int i,j,k,count,x;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    
//     to  count the characters in a word

    for(j=0;str[j]!='\0'; )
    {
        count=0;
        for(i=j;str[i]!=32 && str[i]!='\0';i++);
        i--;
        if(str[i]==10)
        {
            i--;
        }
        k=i;
        x=j;
        for( ;j<=i;j++)
        {
            count++;
        }
        j=x;
//         to check the count is even or not
        if(count%2==0)
        {
    //     logic for swapping each word at its place 
           for( ;j<=i;j++,i--)
                {
                    temp=str[j];
                    str[j]=str[i];
                    str[i]=temp;
                }
        }
        j=k;
        if(str[j+1]==32 || str[j+1]==10)
        {
            j+=2;
        }
        else
        {
            j++;
        }
        
    }
    printf("final output is: %s\n",str);
    
}
