import java .util.*;
class Series9
{
    public static void meth()
    {
        Scanner sc=new Scanner (System.in);
        System.out.println("Enter the no. of terms");
        int n=sc.nextInt();
        int e=2;
        for(int i=1;i<=n;i++)
        {
            int m=(int)Math.pow(e,2);
            System.out.print(m+",");
            e+=2;
        }
    }
}