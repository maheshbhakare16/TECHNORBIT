import java.util.Scanner;
import java.io.Console;
import  java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
class Demo
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter ID: ");
        int a = sc.nextInt();
        System.out.println("Output: "+a);
        Console c = System.console();
        System.out.print("Enter Username: ");
        String str = c.readLine();
        System.out.println(c.readPassword());
        System.out.print("Username: "+str);
        String str1 = sc.nextLine();
        System.out.println("str1: "+str1);
        String str2 = br.readLine();
        System.out.println("str2: "+str2);
    }
}
