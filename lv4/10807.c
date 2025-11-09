#include <stdio.h>

int main(){
    int N, v;
    int arr[100];
    int count = 0;

    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int x;
        scanf("%d ",&x);
        arr[i] = x;
    }
    scanf("%d", &v);
    for(int j = 0; j < N; j++){
        if(arr[j] == v){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}