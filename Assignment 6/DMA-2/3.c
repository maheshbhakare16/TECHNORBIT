/*
Title- 3. Write a c program to accept string from user and print String using character pointer only (static memory allocation).
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    char str[100];
    char* p = str;
    int i=0;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("Entered string is: ");
    for(i=0;*(p+i)!='\0' && *(p+i)!='\n';i++)
    {
        printf("%c",*(p+i));
    }
    printf("\n");
}
