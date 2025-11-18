#include <stdio.h>

int main(){

    int group = 0;
    int range = 0;
    int X;

    scanf("%d", &X);

    while(X > range){
        group++;
        range = range + group; 
    }
    range = range - group;
    if(group % 2 == 0){
        printf("%d/%d",X-range,group-(X-range)+1);

    }else{
        printf("%d/%d",group-(X-range)+1,X-range);
    }

    return 0;
}