import java.util.Scanner;
class Parent
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        Bike Pulser = new Bike();
        
        System.out.print("Enter Bike No.: ");
        String B_no = sc.nextLine();
        System.out.print("Enter Chessi No.: ");
        String Chessi_No = sc.nextLine();
        Pulser.setB_NO(B_no);
        Pulser.setChessi_no(Chessi_No);
        Student s = new Student();
        System.out.print("Enter student name: ");
        String name = sc.nextLine();
        System.out.print("Enter student age: ");
        int age = sc.nextInt();
        s.setName(name);
        s.setAge(age);
        s.setAddress();
        System.out.println("Name of Student is: "+s.getName());
        System.out.println("Age of Student is: "+s.getAge());
        s.getAddress();
        s.goToCollegeBy(Pulser);
        
        
    }
}
