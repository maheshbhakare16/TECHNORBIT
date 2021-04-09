/*
Title- 4.Write a C++ program Fibonacci number How to find out if a given number is a Fibonacci number or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<iostream>
int main()
{
    int num,i=0,j=1,k,flag=0;
    std::cout<<"Enter Number to Find in Febonicii Series: ";
    std::cin>>num;
    if(num==0)
    {
        flag =1;
    }
    else
    {
        while(1)
        {
            k=i;
            i=i+j;
            if(i <= num)
            {
                if(i == num)
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                break;
            }
            j=k;
        
        }
    }
    if(flag == 1)
    {
        std::cout<<"Valid......!"<<std::endl;
    }
    else
    {
        std::cout<<"Invalid......!"<<std::endl;
    }
    return 0;
}
