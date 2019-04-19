import java.util.Arrays;
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int M=1001;
        int a[]=new int[M];
        for(int i=0;i<n;i++)
        {
            int x = sc.nextInt();
            a[x]++;
        }

        Arrays.sort(a);

        int i;
        for(i=0;i<M;i++)
        {
            if(a[i]!=0)
                break;
        }




        int j=i,k=M-1;
        int count =a[k];
        int s=0;
        while(j<k)
        {
            s+=a[j++];
        }

        if(s>=(count-1))
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
