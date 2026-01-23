#include <stdio.h>

#define ARRAY 1000001
int prime[ARRAY];

void prime_make(){
    prime[0] = 1;
    prime[1] = 1;
    for(int i = 2; i * i < ARRAY; i++){
        if(prime[i] == 0){
            for(int j = i + i; j < ARRAY; j += i){
                prime[j] = 1;
            }
        }
    }
}

int goldbach_conjecture(int num){
    int prime_first;
    int prime_second;
    int count = 0;

    for(int i = 2; i <= num/2; i++){
        if(prime[i] == 0){
            prime_first = i;
            prime_second = num - i;

            if(prime[prime_second] == 0){
                count++;
            }
        }
    }
    return count;
}

int main(){
    
    prime_make();

    int T;
    scanf("%d",&T);

    for(int i = 0; i < T; i++){
        int num;
        scanf("%d",&num);
        int count = goldbach_conjecture(num);
        printf("%d\n",count);
    }
}