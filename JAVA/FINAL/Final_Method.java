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
/*    void setName() // cannot override final method
    {
    super.name = "Ram";
    }
    */
}

class Main
{
    public static void main(String args[])
    {
        Student st = new Student();
        st.setName();
    }
}
