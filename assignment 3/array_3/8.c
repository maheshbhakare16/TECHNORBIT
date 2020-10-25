/*
Title- Write a program which accept sentence from user and print number of words from that sentence.
Input String:
India_is_my_country
Output:
4
Input String:
______India______is____my____country____ (Consider _ as space)
Output:
4
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    char str[100];
    int i,j,word=0;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    l1:
    while(str[i]!='\0')
    {
        if(str[i]==32)
        {
            i++;
            continue;
        }
        else
        {
            word++;
            break;
        }
    }
    while(str[i]!='\0')
    {
        if(str[i]!=32 && str[i]!='\n' && str[i]!='\0')
        {
            i++;
            continue;
        }
        else
        {
            if(str[i]=='\n' || str[i]=='\0')
            {
                break;
            }
            else
            {
                goto l1;
            }
        }
    }
    printf("\n");
    printf("the total no. of words is a sentence are: %d\n",word);
}
    
 
