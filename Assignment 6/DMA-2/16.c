/*
Title- 16. Write a C program to print only those words from one string which are present in given another
string using 1-D Dynamic memory allocation.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    char *str1=NULL, *str2=NULL, *str3=NULL, *str4=NULL;
    char c;
    int len,length,i,j,k,l,m,n,z,flag;
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
    
    
    str2=(char*)malloc(sizeof(char));
    len=1;
    printf("Enter the string2: ");
    do
    {
        scanf("%c",&c);
        if(c!='\n')
        {
            len++;
            str2=(char*)realloc(str2,len*sizeof(char));
            *(str2+(len-2))=c;
            *(str2+(len-1))='\0';
        }  
    }while(c!='\n');
    
    
    str4=(char*)malloc(sizeof(char));
    
    str3=(char*)malloc(sizeof(char));
    printf("Common Words in both strings are: [");
    
    for(l=0;*(str2+l)!='\0';)
    {
//     ------copying words from string 2-----
        while(*(str2+l)==32)
        {
            l++;
        }

        for(m=l;*(str2+m)!=32 && *(str2+m)!='\0';m++);
        m--;
        z=m;
        length=1;
        while(l<=m)
        {
            length++;
            str4=(char*)realloc(str4,length*sizeof(char));
            *(str4+(length-2))=*(str2+l);
            *(str4+(length-1))='\0';
            l++;
        }
        l=z;
        l++;
//  -----  copying words from string 1 -----
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
                printf("%s, ",str3);
            }
        
        }
    }
    printf("]\n");
    free(str1);
    free(str2);
    free(str3);
    free(str4);
    str1=str2=str3=str4=NULL;
    
}
