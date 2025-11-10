#include <stdio.h>

int main(){

    int X;
    int N;
    int max = -1000000;
    int min = 1000000;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &X);
        if(X > max){
            max = X;
        }
        if(X < min){
            min = X;
        }
    }
    printf("%d %d", min, max);

    return 0;
}