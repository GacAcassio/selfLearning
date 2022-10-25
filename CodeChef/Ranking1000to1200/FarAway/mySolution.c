#include<stdio.h>
int main(void){
    long unsigned int T;
    scanf("%lu", &T);
    for(T=T; T>0; T--){
        long long unsigned int  N,M,S=0,L;
        scanf("%llu%llu", &N, &M);
        long long unsigned int  A[N];
        for(int i=0; i<N; i++){
            scanf("%llu", &L);
            A[i]=L;
        }
        for(int i=0; i<N; i++){
            if(abs(A[i]-M)>abs(A[i]-1)){
                S+=abs(A[i]-M);
            }else{
                S+=abs(A[i]-1);
            }
        }
        printf("%llu\n", S);
    }
    return 0;
}
