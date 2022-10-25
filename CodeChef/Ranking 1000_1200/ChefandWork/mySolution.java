
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) 
	{
	    Scanner imp= new Scanner(System.in);
		
		int T = imp.nextInt();
		
		for(int i=0; i<T; i++){
		    
		    int N =imp.nextInt();
		    int K=imp.nextInt();
		    
		    int v[]= new int[N];
		    
		    int c=1,s=0;
		    
		    for(int j=0; j<N; j++){
		        v[j]=imp.nextInt();
		    }
		    
		    for(int j=0; j<N; j++){
		        if(v[j]>K){
		            c=-1;
		            break;
		        }
		        s= s+v[j];
		        if(s>K){
		            s=v[j];
		            c++;
		        }
		    }
		    System.out.println(c);
		}
	}
}
