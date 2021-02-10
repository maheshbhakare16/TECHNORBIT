/*
Title- 1. static local practice.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>

// -------------------- FUNCTION TO  COUNT LIKE TO POST ----------------------------
void dopostlike()
{
static int like=0;
like++;
printf("%d\n",like);
}
// -------------------- FUNCTION TO  COUNT LIKE TO STORY ----------------------------
void dostorylike()
{
static int like=0;
like++;
printf("%d\n",like);
}
void main()
{
dopostlike();
dopostlike();
dopostlike();
dopostlike();
dopostlike();
dostorylike();
dostorylike();
dostorylike();
dostorylike();
dostorylike();
dostorylike();
dostorylike();
dostorylike();
}
