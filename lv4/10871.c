#include <stdio.h>

int main(){

    int arr[10000];
    int X, N;
    scanf("%d %d",&N, &X);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    for(int j = 0; j < N; j++){
        if(X > arr[j] ){
            printf("%d ", arr[j]);
        }
    }

    return 0;
}