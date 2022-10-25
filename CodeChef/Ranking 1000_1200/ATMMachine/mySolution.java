import java.util.Scanner;
class Codechef
{
	public static void main (String[] args)
	{
	    
        Scanner input = new Scanner(System.in);
	    int T;
	    T = input.nextInt();
	    int N,K,A;
	    for(T=T; T>0; T--)
	    {
	        N=input.nextInt();
	        K=input.nextInt();
	        for(N=N; N>0; N--)
	        {
	            A=input.nextInt();
	            if(A<=K)
	            {
	                System.out.print("1");
	                K-=A;
	            }else{
	                System.out.print("0");
	            }
	        }
	        System.out.print("\n");
	    }
	}
}
