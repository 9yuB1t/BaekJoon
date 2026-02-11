#include <stdio.h>

int main(){

    int N;
    scanf("%d",&N);
    for(int i = N - 1; i > 0; i--){
        N = N * i;
    }
    if(N == 0){
        N = 1;
    }
    printf("%d",N);

    return 0;
}