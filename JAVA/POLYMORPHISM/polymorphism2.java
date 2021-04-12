class Employee
{
    int ini_salary;
    Employee(int x)
    {
    ini_salary = x;
    }
    void cal_salary()
    {
    System.out.println(ini_salary);
    }
}
class Manager extends Employee
{
    void cal_salary()
    {
    ini_salary+=50000;
    System.out.println(ini_salary);
    }
    Manager(int x)
    {
        super(x);
    }
}
class Main
{
    public static void main(String args[])
    {
        Employee m = new Manager(20000);
        Employee e = new Employee(20000);
        m.cal_salary();
        e.cal_salary();
    }
}
