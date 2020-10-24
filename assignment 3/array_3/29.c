/*
Title- Write a C program which accept string from user and then accept range and reverse the string in
that range without taking another string.
Eg:
Input String:
India is my country
Input of N1:
3
Input of N1:
9
Output String:
Indm si aicountry
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
    char str[100],temp;
    int i,j,m,n,count=0;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("enter the starting range: ");
    scanf("%d",&m);
     printf("enter the ending range: ");
    scanf("%d",&n);
    if(m<n)
    {
        for(i=0;count<m;i++)
        {
            if(str[i]!=32)
            {
                count++;
            }
        }
        printf("%d\n",i);
        i--;
        count=0;
        for(j=0;count<n;j++)
        {
            if(str[j]!=32)
            {
                count++;
            }
        }
        printf("%d\n",j);
        j--;
        for(i;i<=j;i++,j--)
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        printf("final string is: %s\n",str);
    }
    else
    {
        printf("enter the proper range.\n");
    }
    
}
 
