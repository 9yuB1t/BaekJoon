#include <stdio.h>

int main(){

    char string[1000];
    int i;

    scanf("%s", string);
    scanf("%d", &i);

    printf("%c", string[i-1]);

    return 0;
}