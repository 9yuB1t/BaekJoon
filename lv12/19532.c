#include <stdio.h>

int main(){

    int D, Dx, Dy;
    
    int x, y;

    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

    D = a * e - b * d;

    Dx = c * e - b * f;

    Dy = a * f - c * d;

    x = Dx / D;

    y = Dy / D;

    printf("%d %d\n", x, y);


    return 0;
}