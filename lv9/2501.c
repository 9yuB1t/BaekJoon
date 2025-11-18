#include <stdio.h>
#include <math.h>


int main(){
    int N,K;
    int count = 1;
    scanf("%d %d",&N,&K);

    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            if(count == K){
                printf("%d", i);
                return 0;
            }else{
                count++;
            }
        }
    }
    printf("0");

    return 0;
}