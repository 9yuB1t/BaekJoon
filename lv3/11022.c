#include <stdio.h>

int main(){

    int T;
    scanf("%d",&T);
    for(int i = 1; i <= T; i++){
        int x,y;
        scanf("%d %d",&x,&y);
        printf("Case #%d: %d + %d = %d\n",i,x,y,x+y);
    }
    return 0;
}