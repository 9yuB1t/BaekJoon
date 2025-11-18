#include <stdio.h>

int main(){

    int N;
    int i = 1;
    int range = 1;
    scanf("%d",&N);

    while(N>range){
        range = range + 6*i;
        i++;
    }
    printf("%d",i);
    return 0;
}