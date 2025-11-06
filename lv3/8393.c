#include <stdio.h>

int main(){

    int num, result;
    scanf("%d",&num);
    result = 0;
    for(int i = 1; i <= num; i++){
        result = result + i;
    }
    printf("%d", result);

    return 0;
}