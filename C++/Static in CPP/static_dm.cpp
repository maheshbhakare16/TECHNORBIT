#include<iostream>
class Student
{
public:
    int roll;
    float marks;
    std::string name;
    static int college_code;
    static std::string college_name;
    Student(int roll,float marks,std::string name)
    {
        this->roll = roll;
        this->marks = marks;
        this->name = name;
    }
    static void get_clg(int x)
    {
        int y=3;
        std::cout<<x<<std::endl;
        std::cout<<college_name<<" "<<college_code<<std::endl;
    }
    void get_student()
    {
        int z;
        std::cout<<z<<std::endl;
        std::cout<<"name: "<<this->name<<" roll: "<<this->roll<<" marks: "<<this->marks<<" college_code: "<<this->college_code<<" college_name: "<<this->college_name<<std::endl;
    }
};
int Student::college_code;
std::string Student::college_name = "AVCOE";
int main()
{
    Student sai(12,72.5,"SAI");
    Student::get_clg(20);
    sai.get_clg(30);
    sai.get_student();
//     Student::get_student(); //   cannot call without object
    
    return 0;
}
