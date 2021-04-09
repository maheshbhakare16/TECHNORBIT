/*
Title- 1.Write a C++ program to find power of any number x^y
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<iostream>
int main()
{
    int i,x,y,power=1;
    std::cout<<"Please Enter X: ";
    std::cin>>x;
    std::cout<<"Please Enter Power Y: ";
    std::cin>>y;
    for(i=0;i<y;i++)
    {
        power*=x;
    }
    std::cout<<x<<"^"<<y<<" = "<<power<<std::endl;
    return 0;
}
