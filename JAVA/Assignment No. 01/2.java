class DemoOne
{
    public static void main(String args[])
    {
        int i,k;
        for(k=0;k<(args.length);k++)
        {
            String str = args[k];
            String str1 = "";
            int n = str.length();
            for(i=n-1;i>=0;i--)
            {
                str1 = str1+str.charAt(i);
            }
            if(str.equals(str1))
            {
                System.out.println("String "+args[k]+" is palindrome string...");
            }
            else
            {
                System.out.println("String "+args[k]+" is not palindrome string...");
            }
            
        }
    }
}
