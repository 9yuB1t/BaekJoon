#include <stdio.h>

int main(){

    int i,j;
    int N, M;
    int temp;
    int arr[100] = {0};

    scanf("%d %d",&N, &M);
    for(int b = 0; b < N; b++){
        arr[b] = b+1;
    }
    for(int r = 0; r < M; r++){
        scanf("%d %d",&i,&j);
        temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;
    }
    for(int o = 0; o < N; o++){
        printf("%d ", arr[o]);
    }
    return 0;
}