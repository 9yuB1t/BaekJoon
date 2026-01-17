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

    int a1, a2;
    int b1, b2;

    scanf("%d %d %d %d",&a1, &a2, &b1, &b2);

    a1 = (a1 * b2) + (b1 * a2);
    a2 = a2 * b2;
    int x = gcb(a1,a2);
    printf("%d %d", a1/x, a2/x);

    return 0;
}