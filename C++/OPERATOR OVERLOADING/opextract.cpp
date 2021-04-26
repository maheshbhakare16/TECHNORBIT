#include<iostream>

class Demo
{
    int a,b,c;
public:
    friend std::istream& operator>>(std::istream &is,Demo &other);
    friend std::ostream& operator<<(std::ostream&, const Demo&);
};

std::ostream& operator<<(std::ostream &os, const Demo &other)
{
    os<<other.a<<", ";
    os<<other.b<<", ";
    os<<other.c;
    return os;
}

std::istream& operator>>(std::istream &is,Demo &other)
{
    is>>other.a;
    is>>other.b;
    is>>other.c;
    return is;
}

int main()
{
    Demo d1;
    std::cin>>d1;
    std::cout<<"values of A,B,C are: ";
    std::cout<<d1<<std::endl;
    return 0;
}
