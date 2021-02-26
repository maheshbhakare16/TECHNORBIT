class Demo
{
    public static void main(String args[])
    {
        int n = Integer.parseInt(args[0]);
        int temp,i=0,j,temp1,mult,sum=0;
        temp = n;
        while(temp!=0)
        {
            temp=temp/10;
            i++;
        }
        temp = n;
        while(temp!=0)
        {
            temp1 = temp%10;
            mult = 1; 
            j=0;
            for(j=0;j<i;j++)
            {
                mult = mult*temp1;
            }
            sum =sum+mult;
            temp = temp/10;
        }
        if(sum == n)
        {
        System.out.println("Armstrong");
            j=2;
            while(j<=n)
            {
                if(n%j == 0)
                {
                    i=2;
                    while(i<=j)
                    {
                        if(j%i == 0)
                        {
                            if(j==i)
                            {  
                                System.out.println(j);
                            }
                        }
                        i++;
                    }
                }
                j++;
            }
        }
       System.out.printf("\n"); 
    }
}
