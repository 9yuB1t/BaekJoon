#include <stdio.h>

int main(){

    char N[100];
    int number;
    int sum = 0;

    scanf("%d", &number);
    scanf("%s", N);
    for(int i = 0; i < number; i++){
        sum = sum + (int)N[i] - 48;
    }
    printf("%d", sum);

    return 0;
}