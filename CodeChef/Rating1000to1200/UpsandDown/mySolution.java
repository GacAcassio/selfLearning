import java.util.*;
import java.io.*;

class CodeChef
{
    public static void main(String[] args)
    {
        Scanner inp= new Scanner(System.in);
        int t=inp.nextInt();
        while(t-->0)
        {
            int l=inp.nextInt();
            int[] a = new int[l];
            for(int i=0; i<l;i++)
            {
                a[i]=inp.nextInt();
            }
            for(int i=0; i<l-1;i++)
            {
                if(i%2==0)
                {
                    if(a[i]>a[i+1])
                    {
                        a[i]=a[i]+a[i+1];
                        a[i+1]=a[i]-a[i+1];
                        a[i]=a[i]-a[i+1];
                    }
                }
                else
                {
                    if(a[i]<a[i+1])
                    {
                        a[i]=a[i]+a[i+1];
                        a[i+1]=a[i]-a[i+1];
                        a[i]=a[i]-a[i+1];
                    } 
                }
            }
            for(int b: a)
            {
                System.out.print(b+" ");
            }
            System.out.print("\n");
        }
    }
}
