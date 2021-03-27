import java.util.Scanner;
class Student
{
    private String name="";
    private int age;
    public void setName(String str)
    {
        this.name  = str;
    }
    public String getName()
    {
        return this.name;
    }
    
    public void setAge(int age)
    {
        this.age = age;
    }
    public int getAge()
    {
        return this.age;
    }
    Address adr = new Address();
    public void setAddress()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter address: ");
        String add = sc.nextLine();
        adr.setAdd(add);
    }
    public void getAddress()
    {
        System.out.println("Address is: "+adr.getAdd());
    }
    
    public void goToCollegeBy(Bike b)
    {
        System.out.println("Bike No: "+b.getB_NO());
        System.out.println("Chessi No: "+b.getChessi_no());
    }
    
}
