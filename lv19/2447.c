#include <stdio.h>
#include <stdlib.h>

char **arr;

void star(int n, int i, int j){
    if(n == 1){
        arr[i][j] = '*';
        return;
    }
    int unit = n / 3;

    for(int small_i = 0; small_i < 3; small_i++){
        for(int small_j = 0; small_j < 3; small_j++){
            if(small_i == 1 && small_j == 1) continue;
            star(unit, i + small_i * unit, j + small_j * unit);
        }
    }
}

int main(){
    int N;
    scanf("%d",&N);
    arr = (char**)malloc(sizeof(char*) * N);
    for(int i = 0; i < N; i++) arr[i] = (char*)malloc(sizeof(char) * (N+1));
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            arr[i][j] = ' ';
        }
        arr[i][N] = '\0';
    }

    star(N,0,0);

    for(int i = 0; i < N; i++){
        printf("%s\n",arr[i]);
    }

    for(int i = 0; i < N; i++) free(arr[i]);
    free(arr);

}

//재귀 X
/*
#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int row = i;
            int col = j;
            int is_blank = 0;

            while(row > 0){
                if(row % 3 == 1 && col % 3 ==1){
                    is_blank = 1;
                    break;
                }
                row /= 3;
                col /= 3;
            }
            if(is_blank) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/