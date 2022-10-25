import java.util.Scanner;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner input = new Scanner(System.in);
		int t, maxt, maxn, sumn, a, b,n;
		t=input.nextInt();
		for(t=t; t>0; t--)
		{
		    maxn=input.nextInt();
		    maxt=input.nextInt();
		    sumn=input.nextInt();
		    if(sumn%maxt>0)
		    {
		        n=sumn/maxt;
		        a=maxt;
		        if(n>=maxn)
		        {
		            n=maxn;
		            b=0;
		        }else{
		            b=sumn%maxt;
		        }
		    }
		    else
		    {
		        n=sumn/maxt;
		        b=0;
		        a=maxt;
		        if(n>maxn)
		        {
		            n=maxn;
		        }
    		}
    		System.out.println((n*((int)Math.pow(a,2)))+((int)Math.pow(b,2)));
		}
	}
}
