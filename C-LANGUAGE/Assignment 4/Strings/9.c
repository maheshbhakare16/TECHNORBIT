/*
Title- Write a C program to replace Good names in mail.
Eg:
Raw String:
Hello GoodName
Input String:
India
Output String:
Hello India
Input String:
Sangamner
Output String:
Hello Sangamner
Input String:
technOrbit
Output String:
Hello technOrbit
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    char raw_str[100]="Hello GoodName",str[93];
    int i=6,j;
    printf("Enter your goodname: ");
    fgets(str,sizeof(str),stdin);
    for(j=0;str[j]!='\0';j++,i++)
    {
      raw_str[i]=str[j];  
    }
    raw_str[i]='\0';
    printf("%s\n",raw_str);
}
 
