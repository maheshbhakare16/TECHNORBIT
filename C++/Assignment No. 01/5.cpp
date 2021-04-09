/*
Title- 5.Write a C++ program to find the last occurrence position of the number in the given array
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<iostream>

int main()
{
    int arr[10],i,pos,num;
    std::cout<<"Enter array Emements: ";
    for(i=0;i<10;i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<"Enter number to find last occurence: ";
    std::cin>>num;
    for(i=0;i<10;i++)
    {
        if(arr[i]==num)
        {
            pos = i;
        }
    }
    std::cout<<"Last occurence position of number is: "<<pos<<std::endl;
    return 0;
}
