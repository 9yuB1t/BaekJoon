#include <stdio.h>

int prime[1000001];

void find_prime(int m, int n){
    prime[1] = 1;

    for(int i = 2; i * i <= n; i++){
        if(prime[i] == 0){
            for(int j = i * i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }
}

int main(){

    int M;
    int N;

    scanf("%d %d",&M,&N);
    find_prime(M,N);
    for(int i = M; i <= N; i++){
        if(prime[i]==0){
            printf("%d\n",i);
        }
    }

    return 0;

}