#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    if(num1 > num2) return 1;
    if(num1 < num2) return -1;
    return 0;
}

int find(int target, int arr[], int N){
    int low = 0;
    int high = N -1;

    while(low <= high){
        int mid = low + (high-low) / 2;

        if(arr[mid] == target){
            return 1;
        }else if(arr[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return 0;
}


int main(){

    int N;
    scanf("%d",&N);
    int* havecard = (int *)malloc(sizeof(int) * N);

    for(int i = 0; i < N; i++){
        scanf("%d ", &havecard[i]);
    }
    qsort(havecard,N,sizeof(int),compare);

    int M;
    scanf("%d",&M);
    int* findcard = (int *)malloc(sizeof(int) * M);
    for(int i = 0; i < M; i++){
        int temp;
        scanf("%d",&temp);
        findcard[i] = find(temp, havecard, N);
    }
    for(int i = 0; i < M; i++){
        printf("%d ",findcard[i]);
    }

    free(havecard);
    free(findcard);

    return 0;
}