
// ------------------------ FINAL CLASS -------------------------


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

// --------------------------- FINAL METHOD ------------------------------

class Person
{
    protected String name="";
    int age;
    final public void setName()
    {
        this.name = "Ajay";
    }
}
class Student extends Person
{
    public int roll_no;
    public int marks;
    void setName() // cannot override final method
    {
    super.name = "Ram";
    }
    
}

class Main
{
    public static void main(String args[])
    {
        Student st = new Student();
        st.setName();
    }
}

// -------------------------- FINAL DATA MEMBER -----------------------------

class Person
{
    static final String name;
    final int age;
    static
    {
        name = "Ajay";
//         name = "Ram"; // error cannot assign value to final data member
    }
    {
        this.age = 19;
    }
    Person()
    {
//     this.age = 20;// error cannot assign value to final data member
    }
    public static void main(String args[])
    {
        Person p = new Person();
        System.out.println(p.age);
        System.out.println(name);
    }
    
}
