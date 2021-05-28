#include<iostream>

class Student
{
    int roll;
    std::string name;
    int age;
    float marks;
public:
    void setRoll(int roll)
    {
        this->roll = roll;
    }
    void setName(std::string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setMarks(float marks)
    {
        this->marks = marks;
    }
    int getRoll()
    {
        return this->roll;
    }
    int getAge()
    {
        return this->age;
    }
    float getMarks()
    {
        return this->marks;
    }
    std::string getName()
    {
        return this->name;
    }
};


int main()
{
    Student Pratik;
    Pratik.setRoll(2);
    Pratik.setName("Pratik");
    Pratik.setAge(20);
    Pratik.setMarks(87.95);
    std::cout<<"Roll: "<<Pratik.getRoll()<<" Name: "<<Pratik.getName()<<" Age: "<<Pratik.getAge()<<" Marks: "<<Pratik.getMarks()<<std::endl;
    return 0;
}
