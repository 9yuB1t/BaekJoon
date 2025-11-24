#include <stdio.h>

int main(){

    int N;
    int number;
    int sum = 0;
    int card[100];
    int result = 0;

    scanf("%d %d",&N,&number);
    for(int i = 0; i < N; i++){
        scanf("%d",&card[i]);
    }

    for(int i = 0; i < N-2; i++){
        for(int j = i+1; j < N-1;j++){
            for(int k = j+1; k < N;k++){
                sum = card[i] + card[j] + card[k];
                if(number >= sum && sum > result){
                    result = sum;
                }
            }
        }
    }

    printf("%d",result);

    return 0;
}