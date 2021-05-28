#include<iostream>
class Student
{
    int roll;
    std::string name;
    float marks;
    int age;
    static std::string clg_name;
public:
    Student(int roll, std::string name, float marks,int age)
    {
        this->roll  = roll;
        this->name = name;
        this->marks = marks;
        this->age = age;
    }
    Student()
    {
        
    }
    Student& operator()()
    {
        std::cout<<"Hey there, I am a Object of Student class..."<<std::endl;
        return *this;
    }
    void operator()(int x, int y)
    {
        std::cout<<"I got "<<x<<" & "<<y<<std::endl;
    }
};
std::string Student::clg_name = "AVCOE,Sangamner-422608";


int main()
{
    Student shubh(1,"Shubham",72.33,20);
    Student Raj(2,"Rajenra",85.35,21);
    shubh()(10,20);
    Raj();
}
