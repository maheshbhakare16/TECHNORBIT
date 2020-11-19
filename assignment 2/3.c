/*
Title- 3. Write a C program to print all alphabets from a to z. - using while loop
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
char alpha='a';
while(alpha!='z')
{
    printf("%c\t",alpha);
    alpha++;
}
printf("%c\n",alpha);
}
