#include<iostream>

class Power
{
public:
    int p;
    
//     Power()
//     {
//         std::cout<<"In power"<<std::endl;
//     }
    Power(int pw)
    {
        std::cout<<pw<<std::endl;
    }
};

class Scanner:virtual public Power
{
public:
    int s;
    Scanner(int sc, int pw):Power(pw)
    {
        std::cout<<sc<<std::endl;
    }
};

class Printer: virtual public Power
{
public:
    int prtr;
    Printer(int pr,int pw):Power(pw)
    {
        std::cout<<pr<<std::endl;
    }
};


class Copy: public Scanner,public Printer
{
public:
    int c;
//     Copy(int cp, int sc, int pr, int pw):Scanner(sc,pw),Printer(pr,pw)
//     {
//         std::cout<<cp<<std::endl;
//     }
    Copy(int cp, int sc, int pr, int pw):Power(pw),Scanner(sc,pw),Printer(pr,pw)
    {
        std::cout<<cp<<std::endl;
    }
};


int main()
{
    Copy c(10,20,30,40);
    return 0;
}
