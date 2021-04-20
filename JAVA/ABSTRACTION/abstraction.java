abstract class Demo
{
    abstract void fun();
    abstract void gun();
    void run()
    {
        System.out.println("In demo run");
    }
}
class Test extends Demo
{
    void run()
    {
        System.out.println("In Test run");
    }
    void fun()
    {
        System.out.println("In Fun");
    }
    void gun()
    {
        System.out.println("In Gun");
    }
    public static void main(String args[])
    {
        Demo t = new Test();
        t.run();
        t.gun();
        t.fun();
    }
}
