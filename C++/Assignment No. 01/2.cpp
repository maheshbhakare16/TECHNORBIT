/*
Title- 2.Write a C++ program to check valid email id using character array.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<iostream>

int main()
{
    char arr[100],i,flag=0;
    std::cout<<"Enter EmailID: ";
    fgets(arr,100,stdin);
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i] == '@')
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        std::cout<<"Valid Email ID.....!"<<std::endl;
        
    }
    else
    {
        std::cout<<"Invalid Email ID.....!"<<std::endl;
    }
    return 0;
}
