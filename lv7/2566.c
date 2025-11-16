#include <stdio.h>

int main(){

    int arr[9][9] = {0};
    int max = -1;
    int index[2] = {0};

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j] > max){
                max = arr[i][j];
                index[0] = i +1;
                index[1] = j +1; 
            }
        }
    }
    printf("%d\n%d %d",max,index[0],index[1]);

    return 0;
}