import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner input = new Scanner(System.in);
		int t=input.nextInt();
		while(t-->0)
		{
		    int n=input.nextInt();
		    int[] v=new int[n+1];
		    v[0]=100001;
		    for(int i=0; i<n; i++)
		       v[i+1]=input.nextInt();
		    Arrays.sort(v);
		    for(int i=0;  i<n; i+=2)
		    {
		        if(v[i]!=v[i+1])
		        {
		           System.out.println(v[i]);
		           break;
		        }
		    }
		}
	}
}
