#include <stdio.h>

int main(){

    char chess[50][50] = {0};
    int min = 64;
    int M,N;

    scanf("%d %d",&N,&M);

    for(int i = 0; i < N; i++){
        scanf("%s",chess[i]);
    }

    for(int checkN = 0; checkN <= N - 8; checkN++){
        for(int checkM = 0; checkM <= M - 8; checkM++){
            int count_b = 0;
            int count_w = 0;

            for(int i = 0; i < 8; i++){
                for(int j = 0; j < 8; j++){
                    int row = i + checkN;
                    int col = j + checkM;

                    if((i + j) % 2 == 0){
                        //시작이 B로 시작
                        if(chess[row][col] != 'B'){
                            count_b++;
                        }

                        //시작이 W로 시작
                        if(chess[row][col] != 'W'){
                            count_w++;
                        }
                    }

                    if((i+j) % 2 == 1){
                        //시작이 B로 시작
                        if(chess[row][col] != 'W'){
                            count_b++;
                        }

                        //시작이 W로 시작
                        if(chess[row][col] != 'B'){
                            count_w++;
                        }
                    }
                }
            }
            if ( min > count_b){
                min = count_b;
            }
            if ( min > count_w){
                min = count_w;
            }
        }
    }

    printf("%d", min);

    return 0;
}