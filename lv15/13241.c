#include <stdio.h>

long long int gcb(long long int a, long long int b){
    while(b != 0){
        long long int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){

    long long int a;
    long long int b;
    long long int result;

    scanf("%lld %lld", &a, &b);
    long long int x = gcb(a,b);

    result = (a / x) * b;
    printf("%lld",result);

    return 0;
}