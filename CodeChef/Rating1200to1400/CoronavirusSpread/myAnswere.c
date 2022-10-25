#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t>0){
	    t--;
	    int l;
	    scanf("%d", &l);
	    int e[l],s[l];
	    for(int i=0; i<l; i++){
	        scanf("%d", &e[i]);
	    }
	    int maior=0,menor=10;
	    for(int i=0; i<l; i++){
	        int j=1;
	        s[i]=1;
	        int k=e[i];
	        while(e[i+j]-k<=2&&e[i+j]-k>=-2&&(i+j)<l){
	            k=e[i+j];
	            j++;
	            s[i]++;
	        }
	        j=1;
	        k=e[i];
	        while(e[i-j]-k<=2&&e[i-j]-k>=-2&&(i-j)>=0){
	            k=e[i-j];
	            j++;
	            s[i]++;
	        }
	        if(s[i]<menor&&s[i]!=0){
	            menor=s[i];
	        }
	        if(s[i]>maior){
	            maior=s[i];
	        }
	    }
	    printf("%d %d\n", menor, maior);
	}
	return 0;
}
