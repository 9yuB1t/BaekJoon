#include <stdio.h>

int main(){

    int N, k;
    int num[1000] = {0};

    scanf("%d %d",&N,&k);
    for(int i = 0; i < N; i++){
        scanf("%d",&num[i]);
    }
    for(int j = 0; j < N -1 ; j++){
        for(int k = j+1; k < N; k++){
            if(num[j]<num[k]){
                int temp = num[j];
                num[j] = num[k];
                num[k] = temp;
            }
        }
    }
    printf("%d",num[k-1]);

    return 0;
}