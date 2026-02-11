#include <stdio.h>

int fact(int N){
    int r = 1;
    for(int i = 1; i <= N; i++){
        r = r * i;
    }
    return r;
}


int main(){
    int N;
    int K;
    scanf("%d %d",&N,&K);
    printf("%d",fact(N)/(fact(N-K)*fact(K)));
    return 0;
}