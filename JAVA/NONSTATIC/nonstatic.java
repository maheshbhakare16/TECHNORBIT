class Test
{
    static int a = 5;
    int b = fun();
    int c = 12;
    int fun()
    {
        System.out.println("Fun Method");
        return 43;
    }
    {
        System.out.println("non static Block one");
        System.out.println(a);
    
    }
    int d  = gun();
    {
        System.out.println("Block one");
        System.out.println(a);
    
    }
    int gun()
    {
        System.out.println("Gun method");
        return 67;
    }
    
    {
        System.out.println("static block 2");
    }
}
class Demo
{
    public static void main(String args[])
    {
        
        Test t = new Test();
        System.out.println("Hello Main");
    }
}
