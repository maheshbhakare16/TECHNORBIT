/*
Title- 15. Write a C program to reverse a string using Dynamic memory allocation.
Eg:
Input string:
______India____is_____________my_______country____________
Output string: aidnI_si_ym_yrtnuoc
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    char* str=NULL;
    char c,temp;
    int len=1,i,j,k;
    str=(char*)malloc(sizeof(char));
    printf("Enter the string: ");
    do
    {
        scanf("%c",&c);
        if(c!='\n')
        {
            len++;
            str=(char*)realloc(str,len*sizeof(char));
            *(str+(len-2))=c;
            *(str+(len-1))='\0';  
        }  
    }while(c!='\n');
    //     logic for swapping each word at its place & removing the extra spaces....
    for(j=0;*(str+j)!='\0';)
    {
        while(*(str+j)==32)
        {
            j++;
        }
        for(i=j;*(str+i)!=32 && *(str+i)!='\0';i++);
        i--;
        k=i;
        while(i>=j)
        {
            printf("%c",*(str+i));
            i--;
        }
        if(*str+(k+1)!='\0')
        {
            printf(" ");
        }
        j=k;
        j++;
        
    }
    printf("\n");
    free(str);
    str=NULL;

    
}






























    
