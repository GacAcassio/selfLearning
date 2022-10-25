#include <stdio.h>

int main(void) {
    	int t,n;	
		scanf("%d", &t);
		for(t=t;t>0;t--) 
		{ 
		    scanf("%d", &n); 
		    for(int i=0; i<n; i++)
		    { 
		        if(n%2==0)
		        {
		            if(i==0 || i==n-1)
		            { 
		              printf("1"); 
		            } 
		            else
		            { 
		                printf("0"); 
		            } 
		            
		        } 
		        else
		        { 
		            if(i%2==0)
		            {
		                printf("0"); 
		                
		            } 
		            else
		            { 
		                printf("1");
		            }
		        } 
		        
		    } 
		    printf("\n");
		}
	return 0;
}
