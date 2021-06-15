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

class Manager:private Employee
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

