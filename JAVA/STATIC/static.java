class Test
{
    static int a = 5;
    static int b;
    int c = 12;
    static int fun()
    {
        System.out.println("Fun Method");
        return 43;
    }
    static
    {
        System.out.println("Block one");
        System.out.println(a);
    
    }
    int gun()
    {
        System.out.println("Gun method");
        fun();
        return 67;
    }
//     int d=gun();
    static
    {
        System.out.println("static block 2");
    }
}
class Demo extends Test 
{
    public static void main(String args[])
    {
        
        Test t = new Test();
        System.out.println("hello Demo");
        int e = t.gun();
        System.out.println(e);
        System.out.println(t.c);
        System.out.println(b);
//         System.out.println(t.d);
    }
}
