import java.util.Scanner;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
class Account
{
    static float withDraw(float balance)throws IOException
    {
        Float with;
        System.out.print("Enter Ammout to withdraw in Rs. ");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        with = Float.parseFloat(br.readLine());
        balance = balance-with;
        System.out.println("Ammount Withdrawed successfully....\nYour account balance is Rs. "+balance);
        return balance;
    }
    static float intrest(float balance)throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int month;
        float total;
        System.out.print("Enter for how many months you want FD: ");
        month = Integer.parseInt(br.readLine());
        total = (((balance/100)*5.23f)/12);
        total = total*month;
        balance = total+balance;
        System.out.println("Your Interest is: Rs. "+total);
        System.out.println("Your total Account balance is Rs. "+balance);
        return balance;
    }
    static float diposit(float balance)throws IOException
    {
        Float dipo;
        System.out.print("Enter Ammout to Diposit in Rs. ");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        dipo = Float.parseFloat(br.readLine());
        balance = balance+dipo;
        System.out.println("Ammount Diposited successfully....\nYour account balance is Rs. "+balance);
        return balance;
    }
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int choice;
        float balance;
        System.out.print("Enter your bank balance: ");
        balance = sc.nextInt();
        do
        {
            System.out.println("*******************************\n1. WithDraw\n2. Diposit\n3. Intrest\n0. Exit");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();
            switch(choice)
            {
                case 1: if(balance == 0.0 )
                        {
                            System.out.println("Insufficient Account balance......");
                        }
                        else
                        {
                            balance = withDraw(balance); 
                        }
                        break;
                case 2: balance = diposit(balance);
                        break;
                case 3: balance = intrest(balance);
                        break;
            }
        }while(choice != 0);
        
    }
    
}
