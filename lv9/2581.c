#include <stdio.h>

int main(){
    int M, N;
    int min = -1;
    int sum = 0;
    scanf("%d %d",&M,&N);
    for(int i = M; i <=N; i++){
        int check = 0;
        if(i == 1){
            continue;
        }
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                check = 1;
                break;
            }
        }
        if(check==0){
            if(min == -1){
                min = i;
            }
            sum += i;
        }
    }
    if(min == -1){
        printf("%d",min);
    }else{
        printf("%d\n%d",sum,min);
    }
    return 0;
}