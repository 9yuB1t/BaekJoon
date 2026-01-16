#include <stdlib.h>
#include <stdio.h>

int gcb(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int N;
    scanf("%d",&N);

    int *result = (int *)malloc(sizeof(int) * N);

    for(int i = 0; i < N; i++){
        int a;
        int b;
        scanf("%d %d",&a,&b);
        int x = gcb(a,b);
        result[i] = (a / x) * b;
    }

    for(int i = 0; i < N; i++){
        printf("%d\n",result[i]);
    }

    free(result);

    return 0;
}