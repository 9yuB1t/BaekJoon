#include <stdio.h>
#include <stdlib.h>

int cnt;
int result = -1;
int *tmp;
int K;

void merge(int arr[], int L, int mid, int R){
    int i = L;
    int j = mid + 1;
    int t = 0;

    while(i <= mid && j <= R){
        if(arr[i] <= arr[j]) tmp[t++] = arr[i++];
        else tmp[t++] = arr[j++];
    }

    while(i <= mid) tmp[t++] = arr[i++];
    while(j <= R) tmp[t++] = arr[j++];

    i = L;
    t = 0;
    while(i <= R){
        cnt++;
        if(cnt == K){
            result = tmp[t];
        }
        arr[i++] = tmp[t++];
    }
}

void merge_sort(int arr[], int L, int R){
    int mid = (L + R) / 2;
    if(L < R){
        merge_sort(arr, L, mid);
        merge_sort(arr, mid +1, R);
        merge(arr, L, mid, R);
    }
}


int main(){

    int N;
    scanf("%d %d",&N,&K);
    int *arr = (int*)malloc(sizeof(int) * N);
    tmp = (int*)malloc(sizeof(int) * N);
    for(int i = 0; i < N; i++){
        scanf("%d",&arr[i]);
    }

    merge_sort(arr, 0, N-1);
    printf("%d", result);

    free(arr);
    free(tmp);
    return 0;

}