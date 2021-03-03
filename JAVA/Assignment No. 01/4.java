import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
class DemoFour
{
 public static void main(String args[]) throws IOException
  {
    BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
    System.out.println("Enter a input");
    int x = Integer.parseInt(br.readLine());
    System.out.println(x);
  
  }
}
