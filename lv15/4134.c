#include <stdio.h>

//소수 찾는 함수 작성 printf까지 하기
void find_prime(long long n){
    if( n <= 2){
        printf("2\n");
        return;
    }
    if(n == 3){
        printf("3\n");
        return;
    }

    while(1){
        int is_p = 1;

        if(n % 2 == 0 || n % 3 == 0){
            is_p = 0;
        }else{
            for(long long i = 5; i * i <= n; i += 6){
                if( n % i == 0 || n % (i + 2) == 0){
                    is_p = 0;
                    break;
                }
            }
        }

        if(is_p){
            printf("%lld\n",n);
            return;
        }
        n++;
    }
}

int main(){

    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        long long temp;
        scanf("%lld",&temp);
        find_prime(temp);
    }

    return 0;
}