
// ---------------------------- OBJECT SLICING ------------------------------

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


// **************************************************************************************************************************************

#include<iostream>
#include<conio.h>
class A
{
	int a;
public:
	A()
	{
		a=1;
	}
};
class B
{
	int b;
public:
	B()
	{
		b=2;
	}
};
class C
{
	int c;
public:
	C()
	{
		c=3;
	}
};
class D: public B, public A, public C
{
	int d;
public:
	D()
	{
		d=4;
	}
};

int main()
{
	A *pa;
	B *pb;
	C *pc;
	D d1;
	pa = &d1;
	pb = &d1;
	pc = &d1;
	std::cout<<pa<<std::endl;
	std::cout<<pb<<std::endl;
	std::cout<<pc<<std::endl;
	getch();
	return 0;
}

// ------------------------------------- STATIC CAST -----------------------------------------------

#include<iostream>

class A
{
public:
	int a;
	A()
	{
		a=10;
	}
};
class B
{
public:
	int b;
	B()
	{
		b=20;
	}
};
class C
{
public:
	int c;
	C()
	{
		c=30;
	}
};

class D: public A, public B, public C
{
public:
	int d;
	D()
	{
		d =40;
	}
};

int main()
{
	D obj;

	A *pa = &obj;
	B *pb = &obj;
	C *pc = &obj;
	D *pd = &obj;
	/* std::cout<<pa->a<<std::endl;
	std::cout<<pa->b<<std::endl;
	std::cout<<pa->c<<std::endl;
	std::cout<<pa->d<<std::endl; */

	/* std::cout<<pb->a<<std::endl;
	std::cout<<pb->b<<std::endl;
	std::cout<<pb->c<<std::endl;
	std::cout<<pb->d<<std::endl; */

	/* std::cout<<pc->a<<std::endl;
	std::cout<<pc->b<<std::endl;
	std::cout<<pc->c<<std::endl;
	std::cout<<pc->d<<std::endl; */

	/* std::cout<<pd->a<<std::endl;
	std::cout<<pd->b<<std::endl;
	std::cout<<pd->c<<std::endl;
	std::cout<<pd->d<<std::endl; */

	pd = static_cast<D*>(pb); // 1) it checks there is inheritance or not. 2)


	std::cout<<pd->a<<std::endl;
	std::cout<<pd->b<<std::endl;
	std::cout<<pd->c<<std::endl;
	std::cout<<pd->d<<std::endl;


	return 0;
}



// --------------------------------------------- VIRTUAL FUNCTION ---------------------------------

#include<iostream>
class A
{
	int a;
public:
	A()
	{
		a=10;
	}
	virtual void display()
	{
		std::cout<<"a = "<<this->a<<std::endl;
	}
};

class B: public A
{
	int b;
public:
	B()
	{
		b=20;
	}
	void display()
	{
		A::display();
		std::cout<<"b = "<<this->b<<std::endl;
	}
};

int main()
{
	B obj;
	A *pa = &obj;
	pa->display();
	return 0;
}


// ***********************************************************************************************************************************

#include<iostream>
#include<string.h>
class Employee
{
    char name[20];
    int id;
    int age;
protected:
    float salary;
public:
    Employee(const char* name = "", int id=0, int age=0, float salary=0.0f)
    {
         strcpy(this->name,name);
         this->id = id;
         this->age = age;
         this->salary = salary;
    }
    
    void setName(const char* name = "")
    {
         strcpy(this->name, name);
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
    
    void setId(int id)
    {
        this->id = id;
    }
    
    int getId()
    {
        return this->id;
    }
    
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    
    float getSalary()
    {
        return this->salary;
    }
    
    virtual void Display()
    {
        std::cout<<"Name: "<<this->name<<std::endl;
        std::cout<<"Age: "<<this->id<<std::endl;
        std::cout<<"Id: "<<this->age<<std::endl;
        std::cout<<"Salary: "<<this->salary<<std::endl;
    }
    virtual float calc_salary()
    {
        return this->salary;
    }
};

class Manager:public Employee
{
    float bonus;
public:
    Manager(const char* name = "", int id=0, int age=0, float salary=0.0f,float bonus=0.0f):Employee(name,id,age,salary)
    {
         this->bonus = bonus;
    }
    
    void setBonus(float bonus)
    {
        this->bonus = bonus;
    }
    
    float getBonus()
    {
        return this->bonus;
    }
    
    float calc_salary()
    {
        return this->salary+this->bonus;
    }
    void Display()
    {
        Employee::Display();
        std::cout<<"Bonus: "<<this->bonus<<std::endl;
    }
};
class Salesman:public Employee
{
    float incentive;
public:
    Salesman(const char* name = "", int id=0, int age=0, float salary=0.0f,float incentive=0.0f):Employee(name,id,age,salary)
    {
         this->incentive = incentive;
    }
    
    void setIncentive(float incentive)
    {
        this->incentive = incentive;
    }
    
    float getIncentive()
    {
        return this->incentive;
    }
    
    float calc_salary()
    {
        return this->salary+this->incentive;
    }
    void Display()
    {
        Employee::Display();
        std::cout<<"Incentive: "<<this->incentive<<std::endl;
    }
};

float totalIncome(Employee* ptr[], int n)
{
    float total = 0.0f;
    for(int i =0;i<n;i++)
    {
        total = total+ptr[i]->calc_salary();
    }
    return total;
}

float totalSalary(Employee* ptr[], int n)
{
    float total = 0.0f;
    for(int i =0;i<n;i++)
    {
        total = total+ptr[i]->getSalary();
    }
    return total;
}


int main()
{
    Employee* ptr[5];
    ptr[0] = new Employee("Pratik",101,21,30000.50);
    ptr[1] = new Manager("Mahesh",102,23,30000.50,2000);
    ptr[2] = new Salesman("Aditya",103,19,30000.50,400);
    ptr[3] = new Manager("Yogesh",104,20,30000.50,2000);
    ptr[4] = new Salesman("Nikhil",105,25,30000.50,400);
    for(int i = 0; i<5;i++)
    {
        ptr[i]->Display();
        std::cout<<"Overall Salary: "<<ptr[i]->calc_salary()<<std::endl;
        std::cout<<"************************************************"<<std::endl;
    }
    std::cout<<"************************************************"<<std::endl;
    std::cout<<"************************************************"<<std::endl;
    std::cout<<"Total Income: "<<totalIncome(ptr,5)<<std::endl;
    std::cout<<"Total Salary: "<<totalSalary(ptr,5)<<std::endl;
    std::cout<<"************************************************"<<std::endl;
    std::cout<<"************************************************"<<std::endl;
    
}


//************************************************************************************************************************************

#include<iostream>

class Demo
{
    int a;
    int b;
public:
    Demo(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    virtual void Display()
    {
        std::cout<<"a: "<<a<<std::endl;
        std::cout<<"b: "<<b<<std::endl;
    }
};

class Test : public Demo
{
    char c;
    char d;
public:
    Test(int a, int b, char c, char d):Demo(a,b)
    {
        this->c = c;
        this->d = d;
    }
    void Display()
    {
        Demo::Display();
        std::cout<<"c: "<<c<<std::endl;
        std::cout<<"d: "<<d<<std::endl;
    }
};

int main()
{
    Demo d1(0,0);
    Demo *d;
    Test t(1,2,'a','b');
    d = &t;
    std::cout<<sizeof(*d)<<std::endl;
    std::cout<<sizeof(d1)<<std::endl;
    std::cout<<sizeof(t)<<std::endl;
}
