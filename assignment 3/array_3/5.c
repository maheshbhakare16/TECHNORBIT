/*
Title- Write a C program to count count of number of vowels and number of consonants in the given
string.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
    char str[100];
    int i,vovels=0,consonants=0;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vovels++;
        }
        else
            if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
            {
                consonants++;
            }
    }
    printf("No. of Vovels are: %d\nNo. of Consonants are: %d\n",vovels,consonants);
    
}
