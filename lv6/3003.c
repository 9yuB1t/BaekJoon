#include <stdio.h>

int main(){
    int chess[6] = {1,1,2,2,2,8};
    int dong[6];

    for(int i = 0; i < 6; i++){
        scanf("%d", &dong[i]);
    }
    for(int j = 0; j < 6; j++){
        printf("%d ",chess[j]-dong[j]);
    }

    return 0;
}