#include <stdio.h>

int main(){

    int arr[30] = {0};
    int num;
    for(int i = 0; i < 28; i ++){
        scanf("%d", &num);
        arr[num-1] = 1;
    }
    for(int j = 0; j <30; j++){
        if(arr[j]==0){
            printf("%d\n",j);
        }
    }

    return 0;
}