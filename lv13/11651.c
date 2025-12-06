#include <stdio.h>

int array[100000][2];
int temp[100000][2];

void MergeSort(int L, int R){
    if(L>=R){
        return;
    }

    int M = (L+R)/2;

    MergeSort(L,M);
    MergeSort(M+1,R);

    //병합 시작
    int l = L;
    int r = M+1;
    int i = L;

    while(l <= M && r <= R){
        if(array[l][1] == array[r][1]){
            if(array[l][0] < array[r][0]){
                temp[i][0] = array[l][0];
                temp[i][1] = array[l][1];
                i++;
                l++;
            }else{
                temp[i][0] = array[r][0];
                temp[i][1] = array[r][1];
                i++;
                r++;
            }
        }
        else if(array[l][1] < array[r][1]){
            temp[i][0] = array[l][0];
            temp[i][1] = array[l][1];
            i++;
            l++;
        }else{
            temp[i][0] = array[r][0];
            temp[i][1] = array[r][1];
            i++;
            r++;
        }
    }

    while(l <= M){
        temp[i][0] = array[l][0];
        temp[i][1] = array[l][1];
        i++;
        l++;
    }

    while(r <= R){
        temp[i][0] = array[r][0];
        temp[i][1] = array[r][1];
        i++;
        r++;
    }

    for(int k = L; k <= R; k++){
        array[k][0] = temp[k][0];
        array[k][1] = temp[k][1];
    }

}

int main(){
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d %d",&array[i][0],&array[i][1]);
    }
    MergeSort(0,N-1);
    for(int j = 0; j < N; j++){
        printf("%d %d\n",array[j][0],array[j][1]);
    }

    return 0;
}