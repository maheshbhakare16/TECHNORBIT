#include<stdio.h>
#include<stdlib.h>
void main()
{
    char* str;
    char c;
    int len=1;
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
    printf("%s\n",str);
}

