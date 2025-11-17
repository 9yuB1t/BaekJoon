#include <stdio.h>

int main(){

    int T;
    int Q = 25;
    int D = 10;
    int N = 5;
    int P = 1;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        int C = 0;

        scanf("%d",&C);
        printf("%d %d %d %d\n",C/25, C % 25 /10, C %25 %10 /5, C %25 %10 %5);
    }



    return 0;
}