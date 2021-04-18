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
        
    }
    Person()
    {
    this.age = 19;
//     this.age = 20;// error cannot assign value to final data member
    }
    public static void main(String args[])
    {
        Person p = new Person();
        System.out.println(p.age);
        System.out.println(name);
    }
    
}
