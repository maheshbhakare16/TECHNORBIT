import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Scanner;
import java.io.Console;
class Demo
{
    public static void main(String args[]) throws IOException
    {
//         int a = Integer.parseInt(args[0]);
//         int b = Integer.parseInt(args[1]);
//         System.out.println(args[0]+args[1]);
//         System.out.println(a+b);

//         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//         System.out.print("Enter new string: ");
//         String s = br.readLine();
//         System.out.println(s);

//         Scanner sc = new Scanner(System.in);
//         System.out.println(sc.nextInt());
//         System.out.println(sc.nextFloat());
//         System.out.println(sc.nextBoolean());
//         System.out.println(sc.next());
        
        Console c = System.console();
        System.out.println(c.readLine());
        System.out.println(c.readPassword());
        
    }
}
