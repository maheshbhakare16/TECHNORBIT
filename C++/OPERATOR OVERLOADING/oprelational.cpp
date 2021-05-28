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
    bool operator<(Student &other)
    {
        return ((this->roll < other.roll) && (this->age < other.age) && (this->marks < other.marks));
    }
    bool operator>(Student &other)
    {
        return ((this->roll > other.roll) && (this->age > other.age) && (this->marks > other.marks));
    }
    bool operator&&(Student &other)
    {
        return ((this->roll && other.roll) && (this->age && other.age) && (this->marks && other.marks));
    }
    bool operator||(Student &other)
    {
        return ((this->roll || other.roll) && (this->age || other.age) && (this->marks || other.marks));
    }
    bool operator==(Student &other)
    {
        return ((this->roll == other.roll) && (this->age == other.age) && (this->marks == other.marks));
    }
    bool operator!=(Student &other)
    {
        return ((this->roll != other.roll) && (this->age != other.age) && (this->marks != other.marks));
    }
};
std::string Student::clg_name = "AVCOE,Sangamner-422608";


int main()
{
    Student shubh(1,"Shubham",72.33,20);
    Student Raj(2,"Rajenra",85.35,21);
    Student Ram(0,"Ram",0.00,00);
    std::cout<<"Shubh & Raj: ";
    std::cout<<(shubh<Raj)<<std::endl;
    std::cout<<"Shubh & Raj: ";
    std::cout<<(shubh>Raj)<<std::endl;
    std::cout<<"Shubh & Raj: ";
    std::cout<<(shubh&&Raj)<<std::endl;
    std::cout<<"Shubh & Ram: ";
    std::cout<<(shubh&&Ram)<<std::endl;
    std::cout<<"Shubh & Raj: ";
    std::cout<<(shubh||Raj)<<std::endl;
    std::cout<<"Shubh & Ram: ";
    std::cout<<(shubh||Ram)<<std::endl;
    std::cout<<"Shubh & Ram: ";
    std::cout<<(shubh==Ram)<<std::endl;
    std::cout<<"Ram & Ram: ";
    std::cout<<(Ram==Ram)<<std::endl;
    std::cout<<"Shubh & Ram: ";
    std::cout<<(shubh!=Ram)<<std::endl;
    std::cout<<"Ram & Ram: ";
    std::cout<<(Ram!=Ram)<<std::endl;
}
