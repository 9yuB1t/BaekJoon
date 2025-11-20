#include <stdio.h>

int max(int a, int b){
    return (a>b)?a:b;
}

int main(){

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int check = max(a,max(b,c));
    if(check >= a+b+c-check){
        printf("%d", 2*(a+b+c-check) -1);
    }else{
        printf("%d",a+b+c);
    }

    return 0;
}