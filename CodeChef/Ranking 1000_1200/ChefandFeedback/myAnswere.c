#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t>0){
	    char e[100000];
	    int i=0;
	    t--;
	    scanf("%s", e); 
	    while(e[i+2]!='\0'){
	        if((e[i]=='1'&&e[i+1]=='0'&&e[i+2]=='1')||(e[i]=='0'&&e[i+1]=='1'&&e[i+2]=='0')){
	            i=-1;
	            break;
	        }
	        i++;
	    }
	    if(!(i+1)){
	        printf("\nGood");
	    }else{
	        printf("\nBad");
	    }
	}
	return 0;
}
