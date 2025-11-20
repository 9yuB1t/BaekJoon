#include <stdio.h>

int max(int a, int b){
    return (a>b)?a:b;
}
int min(int a, int b){
    return (a<b)?a:b;
}


int main(){

    int N;
    int maxx = -10001;
    int minx = 10001;
    int maxy = -10001;
    int miny = 10001;

    scanf("%d",&N);

    for(int i = 0; i < N; i++){
        int x, y;
        scanf("%d %d",&x,&y);
        maxx = max(maxx,x);
        maxy = max(maxy,y);
        minx = min(minx,x);
        miny = min(miny,y);
    }

    printf("%d",(maxx-minx) * (maxy-miny));

    return 0;
}