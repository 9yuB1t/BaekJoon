#include <stdio.h>

int main(){

    int first[100][100];
    int second[100][100];
    int N,M;
    scanf("%d %d",&N,&M);

    for(int i = 0; i < N ; i++){
        for(int j = 0; j < M; j++){
            scanf("%d",&first[i][j]);
        }
    }
    for(int i = 0; i < N ; i++){
        for(int j = 0; j < M; j++){
            scanf("%d",&second[i][j]);
        }
    }
    for(int i = 0; i < N ; i++){
        for(int j = 0; j < M; j++){
            printf("%d ",first[i][j]+second[i][j]);
        }
        printf("\n");
    }

    return 0;
}