#include <stdio.h>

int array[1000000];
int temp[1000000];

void MergeSort(int L, int R){
    if(L>=R){
        return;
    }

    int M = (L + R) /2;

    MergeSort(L,M);
    MergeSort(M+1,R);

    //병합 시작

    int l = L;
    int r = M +1;
    int i = L;  //temp 인덱스

    while(l <= M && r <= R){
        if(array[l] < array[r]){
            temp[i++] = array[l++];
        }else{
            temp[i++] = array[r++];
        }
    }

    while ( l <= M){
        temp[i++] = array[l++];
    }
    while( r <= R){
        temp[i++] = array[r++];
    }
    
    for(int k = L; k <=R; k++){
        array[k] = temp[k];
    }
}

int main(){

    int N;
    scanf("%d",&N);
    
    for(int i = 0; i < N; i++){
        scanf("%d",&array[i]);
    }
    MergeSort(0,N-1);
    for(int i = 0; i < N; i++){
        printf("%d\n",array[i]);
    }


    return 0;
}