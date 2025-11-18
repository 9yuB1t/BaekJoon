#include <stdio.h>

int main(){

    int point = 2;
    int N;

    scanf("%d",&N);

    for(int i = 0; i<N; i++){
        point = point*2 -1;
    }
    printf("%d", point*point);

    return 0;
}