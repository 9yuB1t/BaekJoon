#include <stdio.h>

int main(){

    int N;
    int array[1000] = {0};
    scanf("%d",&N);
    
    for(int i = 0; i < N; i++){
        scanf("%d",&array[i]);
    }
    for(int j = 0; j < N -1 ; j++){
        for(int k = j+1; k < N; k++){
            if(array[j]>array[k]){
                int temp = array[j];
                array[j] = array[k];
                array[k] = temp;
            }
        }
    }
    for(int i = 0; i < N; i++){
        printf("%d\n",array[i]);
    }

    return 0;
}