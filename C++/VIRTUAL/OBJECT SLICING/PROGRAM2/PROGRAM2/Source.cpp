#include<iostream>
#include<conio.h>

class Person
{
	char name[20];
	int age;
public:
	Person(const char *name = "", int age=0)
	{
		strcpy(this->name,name);
		this->age = age;
	}
	void setName(const char *name)
	{
		strcpy(this->name,name);
	}
	char* getName()
	{
		return this->name;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	int getAge()
	{
		return this->age;
	}
	void Display()
	{
		std::cout<<"Name: "<<this->name<<std::endl<<"Age: "<<this->age<<std::endl;
	}
};

class Student:public Person
{
	int roll;
	float marks;
public:
	Student(char *name, int age, int roll, float marks):Person(name,age)
	{
		this->roll = roll;
		this->marks = marks;
	}
	void setRoll(int roll)
	{
		this->roll = roll;
	}
	void setMarks(float marks)
	{
		this->marks = marks;
	}
	int getRoll()
	{
		return this->roll;
	}
	float getMarks()
	{
		return this->marks;
	}
	void Display()
	{
		Person::Display();
		std::cout<<"Roll No: "<<this->roll<<std::endl<<"Marks: "<<this->marks<<std::endl;
	}
};

int main()
{
	/*Student Pratik("Pratik",20,12,89.70);
	Person Mahesh("Mahesh",21);
	Pratik.Display();
	Mahesh.Display();
	std::cout<<"************************************"<<std::endl;
	Mahesh = Pratik;
	Mahesh.Display();
	Pratik.Display();*/


	/*Student Pratik("Pratik",20,12,89.70);
	Pratik.Display();
	std::cout<<"************************************"<<std::endl;
	Person &Mahesh =  Pratik;
	Mahesh.Display();
	Pratik.Display();*/

	Student Pratik("Pratik",20,12,89.70);
	Pratik.Display();
	std::cout<<"************************************"<<std::endl;
	Person *Mahesh =  &Pratik;
	Mahesh->Display();
	Pratik.Display();

	getch();
	return 0;
}