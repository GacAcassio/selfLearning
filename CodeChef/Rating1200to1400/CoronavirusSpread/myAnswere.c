#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t>0){
	    t--;
	    int l;
	    scanf("%d", &l);
	    int e[l],s;
	    for(int i=0; i<l; i++){
	        scanf("%d", &e[i]);
	    }
	    int maior=0,menor=10;
	    for(int i=0; i<l; i++){
	        int j=1;
	        s=1;
	        int k=e[i];
	        while(e[i+j]-k<=2&&e[i+j]-k>=-2&&(i+j)<l){
	            k=e[i+j];
	            j++;
	            s++;
	        }
	        j=1;
	        k=e[i];
	        while(e[i-j]-k<=2&&e[i-j]-k>=-2&&(i-j)>=0){
	            k=e[i-j];
	            j++;
	            s++;
	        }
	        if(s<menor){
	            menor=s;
	        }
	        if(s>maior){
	            maior=s;
	        }
	    }
	    printf("%d %d\n", menor, maior);
	}
	return 0;
}
