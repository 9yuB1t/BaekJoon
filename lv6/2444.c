#include <stdio.h>

int main(){

    int star;
    scanf("%d", &star);

    for(int i = 0; i < star; i++){
        for(int j = 0; j < star - i - 1; j++){
            printf(" ");
        }
        for(int k = 0; k < (i + 1)* 2 -1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int l = star - 1 ; l > 0; l--){
        for(int m = star - l; m > 0;m--){
            printf(" ");
        }
        for(int n = (l + 1)* 2 - 3; n > 0; n--){
            printf("*");
        }
        printf("\n");
    }

    return 0;

}