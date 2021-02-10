/*
Title- 17. Write a C program to count repeated words in given string using Dynamic memory allocation.
string using 1-D Dynamic memory allocation.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    char *str1=NULL, *str3=NULL, *str4=NULL;
    char c;
    int len,length,i,j,k,l,m,n,z,flag,count,countw=0,posi,posj;
    str1=(char*)malloc(sizeof(char));
    len=1;
    printf("Enter the string1: ");
    do
    {
        scanf("%c",&c);
        if(c!='\n')
        {
            len++;
            str1=(char*)realloc(str1,len*sizeof(char));
            *(str1+(len-2))=c;
            *(str1+(len-1))='\0';  
        }  
    }while(c!='\n');
    
    str4=(char*)malloc(sizeof(char));
    
    str3=(char*)malloc(sizeof(char));
    printf("number of repeated words in the string is: ");
    
    for(l=0;*(str1+l)!='\0';)
    {
//     ------copying word from string 1 TO STRING 4 -----
        while(*(str1+l)==32)
        {
            l++;
        }

        for(m=l;*(str1+m)!=32 && *(str1+m)!='\0';m++);
        m--;
        z=m;
        length=1;
        posi=l;
        while(l<=m)
        {
            length++;
            str4=(char*)realloc(str4,length*sizeof(char));
            *(str4+(length-2))=*(str1+l);
            *(str4+(length-1))='\0';
            l++;
        }
        l=z;
        l++;
//  -----  copying words from string 1 TO STRING 3 -----
        count=0;
        for(j=0;*(str1+j)!='\0';)
        {
            while(*(str1+j)==32)
            {
                j++;
            }
            for(i=j;*(str1+i)!=32 && *(str1+i)!='\0';i++);
            i--;
            k=i;
            len=1;
            posj=j;
            while(j<=i)
            {
                len++;
                str3=(char*)realloc(str3,len*sizeof(char));
                *(str3+(len-2))=*(str1+j);
                *(str3+(len-1))='\0';
                j++;
            }
            j=k;
            j++;
            
//   ----- checking words are equals or not -----
            for(n=0;*(str3+n)!='\0' && *(str4+n)!='\0';n++)
            {
                if(*(str3+n)==*(str4+n))
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(*(str3+n)==*(str4+n))
            {
                flag=1;
            }
            if(flag==1)
            {
                if(posi<=posj)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        
        }
        if(count>1)
        {
            countw++;
        }
        
    }
    printf("%d\n",countw);
    free(str1);
    free(str3);
    free(str4);
    str1=str3=str4=NULL;
    
}
