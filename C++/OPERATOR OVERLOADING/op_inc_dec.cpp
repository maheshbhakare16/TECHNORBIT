#include<iostream>

class Demo
{
    int x;
    int y;
public:
    Demo(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Demo& operator++()
    {
        std::cout<<"PreIncrement"<<std::endl;
        ++(this->x);
        ++(this->y);
        return *this;
    }
    Demo& operator++(int a)
    {
        std::cout<<a;
        std::cout<<"PostIncrement"<<std::endl;
        (this->x)++;
        (this->y)++;
        return *this;
    }
    Demo& operator--()
    {
        std::cout<<"PreDecrement"<<std::endl;
        --(this->x);
        --(this->y);
        return *this;
    }
    Demo& operator--(int a)
    {
        std::cout<<a;
        std::cout<<"PostDecrement"<<std::endl;
        (this->x)--;
        (this->y)--;
        return *this;
    }
    void display()
    {
        std::cout<<"X : "<<this->x<<" Y : "<<this->y<<std::endl;
    }
    
};

int main()
{
    Demo d(10,20);
    d.display();
    ++d;
    d.display();
    d++;
    d.display();
    d--;
    d.display();
    --d;
    d.display();
    return 0;
}
