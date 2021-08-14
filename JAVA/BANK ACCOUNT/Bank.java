import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.io.Console;
import java.io.IOException;

class Bank
{
    static String Branch = "Union Bank of India,Ghulewadi-422605";
    String Name;
    String Account_No;
    float Balance;
    String Address;
    
    void openAccount(String[] args)
    {
        Name = args[0];
        Account_No = args[1];
        Balance = Float.parseFloat(args[2]);
        Address = args[3];
    }
    
    float withdrawAmmount()
    {
        float Amount;
        System.out.println("Enter withdraw Ammount: ");
        Scanner sc = new Scanner(System.in);
        Amount = sc.nextFloat();
        Balance-=Amount;
        return Balance;
    }
    
    float dipositAmmount() throws IOException
    {
        float Amount;
        System.out.println("Enter Diposit Ammount: ");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Amount = Float.parseFloat(br.readLine());
        Balance+=Amount;
        return Balance;
    }
    
    void displayAccount()
    {
        System.out.println("Branch: "+Branch);
        System.out.println("Name: "+Name);
        System.out.println("Account No.: "+Account_No);
        System.out.println("Address: "+Address);
    }
    public static void main(String[] args) throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int choice;
        Bank b = new Bank();
        do
        {
            System.out.println("1)Open Account");
            System.out.println("2)Diposit Ammount");
            System.out.println("3)Withdraw Amount");
            System.out.println("4)Account Details");
            System.out.println("5)Exit");
            System.out.print("Enter Your Choice: ");
            choice = sc.nextInt();
            switch(choice)
            {
                case 1:
                    b.openAccount(args);
                    break;
                case 2:
                    System.out.println(b.dipositAmmount());
                    break;
                case 3:
                    System.out.println(b.withdrawAmmount());
                    break;
                case 4:
                    b.displayAccount();
                    break;
                case 5:
                    System.exit(0);
                default:
                    System.out.println("Enter Proper Choice..... !");
            }
        }while(choice != 5);   
    }
}
