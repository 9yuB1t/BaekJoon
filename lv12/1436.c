#include <stdio.h>

int check666(int number){

    int count_six = 0;

    while(number > 0){

        if(number % 10 == 6){
            count_six++;
        }else{
            count_six = 0;
        }

        if(count_six >= 3){
            return 1;
        }

        number = number / 10;
    }

    return 0;
}

int main(){

    int N;
    int num = 665;
    int count = 0;

    scanf("%d",&N);
    while(count != N){
        num++;

        if(check666(num) == 1){
            count ++;
        }
            
    }

    printf("%d",num);
    
    return 0;
}