#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	for(t=t; t>0; t--){
	    int n,c=0;
	    scanf("%d", &n);
	    char s[100];
	    scanf("%s", s);
	    for(int i=0; i<n; i++){
	        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='-'&&s[i]!='\''&&s[i]!='_'){
	            c++;
	            if (c>=4){
	                break;
	            }
	        }else{
	                c=0;
	       }
	    }
	    if(c>=4){
	        printf("NO\n");
	    }else{
	        printf("YES\n");
	    }
	}
	return 0;
}
