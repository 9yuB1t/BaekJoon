#include <stdio.h>

#define ARRAY 246913
int prime_num[ARRAY];

void prime_num_check(){
    prime_num[1] = 1;
    
    for(int i = 2; i * i<= ARRAY; i++){
        if(prime_num[i] == 0){
            for(int j = i * i; j <= ARRAY; j += i){
                prime_num[j] = 1;
            }
        }
    }
}

//to do 소수 구하는 함수
int prime_num_count(int num){
    int num2 = 2 * num;
    int count = 0;

    for(int i = num + 1; i <= num2; i++){
        if(prime_num[i] == 0){
            count++;
        }
    }
    return count;
}


int main(){
    prime_num_check();
    while(1){
        int n1;
        scanf("%d",&n1);

        if(n1 == 0){
            return 0;
        }
        
        int count = prime_num_count(n1);
        printf("%d\n",count);

    }
    return 0;

}