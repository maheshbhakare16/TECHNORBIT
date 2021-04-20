class Test1
{

    static void fun(int ...a)

    {

        System.out.println("Number of arguments: " + a.length);
 

        for (int i=0;i<a.length;i++)

            System.out.print(a[i]+" ");

        System.out.println();

    }

    public static void main(String args[])

    {

        fun(100);        

        fun(1, 2, 3, 4);  

        fun();          

    }
}
