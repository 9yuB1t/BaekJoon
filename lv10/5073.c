#include <stdio.h>

int max(int a, int b){
    return (a>b)?a:b;
}

int main(){

    while(1){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
    
        if( a==0 && b==0 && c==0){
            return 0;
        }
        int check = max(a,max(b,c));

        if(check >= a+b+c-check){
            printf("Invalid\n");
            continue;
        }
        if(a == b && b == c){
            printf("Equilateral\n");
        }else if( a== b || a == c || b == c ){
            printf("Isosceles\n");
        }else{
            printf("Scalene\n");
        }
    }

    return 0;
}