import java.util.*;
class o2
{
    static void meth()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a Number");
        int n=sc.nextInt();
        for(int i=0;i<=n;i++)
        {
            int s=i;
            int y=1;
            while(s<=n)
            {
                s=s+y;
                y++;
            }
            if(s==y)
            {
                for(int j=i;j<y;j++)
                {
                    System.out.print(j+"+");
                }
            }
            System.out.println();
        }
    }
}