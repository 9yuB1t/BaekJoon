#include <stdio.h>

int main(){

    int N;
    scanf("%d",&N);

    int count = 0;

    int k = N;
    while(k > 0){
        k = k /10;
        count++;
    }

    for(int i = N-(count*10-count);i < N;i++){
        int sum = i;
        int j = i;
        while(j > 0){
            sum = sum + j%10;
            j = j /10;
        }
        if ( N == sum){
            printf("%d",i);
            return 0;
        }
    }
    printf("0");


    return 0;
}