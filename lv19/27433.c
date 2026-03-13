#include <stdio.h>

long long fact(long long N){
    if(N <= 1) return 1;
    return N * fact(N -1);
}

int main(){

    long long N;
    scanf("%lld",&N);
    printf("%lld",fact(N));

    return 0;
}