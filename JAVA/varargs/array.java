import java.util.Scanner;
class Demo
{
    public static void main(String[] args)
    {
    Scanner sc = new Scanner(System.in);
        int b[][];
//         int a[];
//         a = new int[10];
        b = new int[3][];
        b[0] = new int[2];
        b[1] = new int[3];
        b[2] = new int[4];
        int i,j;
        System.out.println("Enter elements in Array: ");
//         for(i=0;i<a.length;i++)
//         {
//             a[i]=sc.nextInt();    
//         }
//         System.out.println("Array Elements are: ");
//         for(i=0;i<a.length;i++)
//         {
//             System.out.println(a[i]);    
//         }
        for(i=0;i<b.length;i++)
        {
            for(j=0;j<(b[i].length);j++)
            {
                b[i][j] = sc.nextInt();
            }
        }
        System.out.println("****************************************************");
        System.out.println("Array Elements are: ");
        System.out.println("****************************************************");
        for(i=0;i<b.length;i++)
        {
            for(j=0;j<(b[i].length);j++)
            {
                System.out.println(b[i][j]);
            }
            System.out.println("****************************************************");
        }
    }
}

