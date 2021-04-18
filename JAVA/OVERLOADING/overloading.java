class Demo
{
    void fun()
    {
        System.out.println("non parameterised fun ");
    }
    void gun()
    {
        System.out.println("non parameterised gun ");
    }
    void gun(int x, int y)
    {
    System.out.println(x+" "+y);
    }
}
class Test extends Demo
{
    void fun(int a, float c)
    {
        System.out.println(a+" "+c);
    }
    public static void main(String args[])
    {
        Test t =new Test();
        t.gun();
        t.gun(10,20);
        Demo d = new Demo();
        d.fun();
        t.fun();
        t.fun(10,2.95f);
    }
}
