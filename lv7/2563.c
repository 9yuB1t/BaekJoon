#include <stdio.h>

int main(){

    int paper[100][100] = {0};
    int N;
    int area = 0;
    scanf("%d",&N);

    for(int i = 0; i < N; i++){
        int X,Y;
        scanf("%d %d",&X,&Y);
        for(int p = X; p < X + 10; p++){
            for(int q = Y; q < Y + 10; q++){
                if(paper[p][q] == 0){
                    paper[p][q] = 1;
                    area++;
                }
            }
        }
    }
    printf("%d", area);

    return 0;
}