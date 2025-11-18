#include <stdio.h>

int main(){

    int N;
    int count = 0;
    int number[100];
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        int number;
        int check = 0;
        scanf("%d",&number);

        if(number == 1){
            continue;
        }

        for(int j = 2; j < number; j++){
            if(number % j == 0){
                check = 1;
                break;
            }
        }
        if(check == 0){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}