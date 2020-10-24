/*
Title- Write a C program which accept sentence from user and print number of words of even and odd
length from that sentence.
Eg:
Input String:
India is my country. I love my country.
Output :
Even: 5
Odd: 2
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
 


#include<stdio.h>
void main()
{
    char str[100];
    int i,j,k,even=0,odd=0,count;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    
//     removing multiple spaces
    for(j=0;str[j]!='\0';j++)
    {
        if(str[j]==32 && str[j+1]==32)
        {
            for(i=j;str[i]!='\0';i++)
            {
                str[i]=str[i+1];
            }
            
        }
        if(str[j]==32 && str[j-1]==32 && j!=0)
        {
            j-=2;
            
        }   
    }
    
    
//    to remove all the spaces at start and end
    if(str[0]==32)
    {
        for(j=0;str[j]!='\0';j++)
        {
            str[j]=str[j+1];
        }
    }
    if(str[0]==32)
    {
        
    }
    else
    {
        for(j=0;str[j]!='\0';j++);
        if(str[j-1]==10 && str[j-2]==32)
        {
            j--;
            str[j-1]=str[j];
            str[j]=str[j+1];
        }
        if(str[j-1]==32&& str[j]=='\0')
        {
            str[j-1]=str[j];
        }
    }
    
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
        for( ;j<=i;j++)
        {
            count++;
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
//         to check the count is even or odd
        if(count%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }
    printf("even no. of words : %d\nOdd no. of words: %d\n",even,odd);
}
