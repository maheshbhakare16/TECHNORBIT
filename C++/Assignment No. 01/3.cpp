/*
Title- 3.Write a C++ program to convert days into years, weeks and days
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<iostream>

int main()
{
    int days,year,weeks,day;
    std::cout<<"Enter Days: ";
    std::cin>>days;
    year = days/365;
    weeks = (days-(year*365))/7;
    day = ((days-(year*365)) + (weeks*7));
    std::cout<<"Years: "<<year<<" Weeks: "<<weeks<<" Days: "<<day<<std::endl;
    return 0;
}
