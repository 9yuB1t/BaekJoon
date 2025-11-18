#include <stdio.h>

int main(){

    int V, A, B;
    int day = 1;
    int N = 0;

    scanf("%d %d %d",&A, &B, &V);

    N = V - A;
    day += (N+(A-B)-1)/ (A-B);
    printf("%d",day);

    return 0;
}