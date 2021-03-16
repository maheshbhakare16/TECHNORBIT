import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class Meter
{
    public static void main(String args[])throws IOException
    {
        int sum=0,n;
        System.out.print("Enter Meter Reading: ");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int reading =  Integer.parseInt(br.readLine());
        if(reading <=100)
        {
            sum = sum+(reading*3);
        }
        if(reading>100 && reading <=200)
        {
            n=reading-100;
            sum=sum+300+(n*5);
        }
        if(reading>200 && reading <=300)
        {
            n = reading-200;
            sum = sum+300+500+(n*7);
        }
        if(reading>300)
        {
            n = reading-300;
            sum= sum+300+500+700+(n*10);
        }
        System.out.println("Meter Bill is Rs. "+sum);
    }
}
