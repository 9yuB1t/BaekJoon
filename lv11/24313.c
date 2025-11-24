#include <stdio.h>

int main(){
    int a1, a0;
    int c;
    int n;
    scanf("%d %d %d %d",&a1,&a0,&c,&n);
    
    if(a1>c){
        printf("0");
        return 0;
    }
    
    if(a1*n +a0 <= c*n){
        printf("1");
    }else{
        printf("0");
    }

    return 0;
}