#include<iostream>

class Student
{
    public:
        int roll_no;
        int age;
        int marks;

        void calculate_percentage()
        {
            int per;
            per = (marks/6);
            std::cout<<std::endl<<"Percentage = "<<per<<std::endl;
        }
        void display()
        {
            std::cout<<"roll = "<<roll_no<<" age = "<<age<<" marks = "<<marks<<std::endl;
        }
        
};
int main()
{
    class Student Mahesh;
    Mahesh.roll_no = 10;
    Mahesh.age=21;
    Mahesh.marks = 90;
    Mahesh.calculate_percentage();
    Mahesh.display();
    std::cout<<"-----------------------*********************--------------------------";
    class Student Suyash;
    Mahesh.roll_no = 11;
    Mahesh.age=21;
    Mahesh.marks = 100;
    Mahesh.calculate_percentage();
    Mahesh.display();
    std::cout<<"-----------------------*********************--------------------------";
    class Student Jayesh;
    Mahesh.roll_no = 12;
    Mahesh.age=22;
    Mahesh.marks = 80;
    Mahesh.calculate_percentage();
    Mahesh.display();
    return 0;
}
