#include <stdio.h>

int main(){

    int i,j,k;
    int N, M;
    int arr[100] = {0};

    scanf("%d %d",&N, &M);
    for(int r = 0; r < M; r++){
        scanf("%d %d %d",&i,&j,&k);
        for(int b = i - 1; b <= j -1; b++){
            arr[b] = k;
        }
    }
    for(int o = 0; o < N; o++){
        printf("%d ", arr[o]);
    }
    return 0;
}