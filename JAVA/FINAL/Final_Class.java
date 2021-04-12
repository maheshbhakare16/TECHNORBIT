final class Person
{
    String name="";
    int age;
}
class Student extends Person //error cannot inherit final class
{
    public int roll_no;
    public int marks;
    
}

class Main
{
    public static void main(String args[])
    {
        Student st = new Student();
        st.roll_no = 10;
    }
}
