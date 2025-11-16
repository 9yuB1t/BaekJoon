#include <stdio.h>
#include <string.h>

int main(){

    char board[5][16] = {0};

    for(int i = 0; i < 5; i++){
        scanf("%s",board[i]);
    }
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(board[j][i] != '\0'){
                printf("%c",board[j][i]);
            }
        }
    }

    return 0;
}