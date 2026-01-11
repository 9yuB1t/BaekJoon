#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[21];
    int idx;
}Dogam;

int compare(const void *a, const void *b){
    Dogam *A = (Dogam *)a;
    Dogam *B = (Dogam *)b;
    return strcmp(A->name,B->name);
}

int search_name(char *target,Dogam *arr,int N){
    int low = 0;
    int high = N - 1;

    while(low <= high){
        int mid = low + (high - low)/2;

        int res = strcmp(target,arr[mid].name);
        if(res == 0){
            return arr[mid].idx;
        }else if(res > 0){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int N;
    int M;

    scanf("%d %d",&N,&M);

    Dogam *list = (Dogam *)malloc(sizeof(Dogam) * N);
    Dogam *sort_list = (Dogam *)malloc(sizeof(Dogam) * N);

    for(int i = 0; i < N; i++){
        scanf("%s", list[i].name);
        list[i].idx = i + 1;
        sort_list[i] = list[i];
    }
    qsort(sort_list,N,sizeof(Dogam),compare);

    char quiz[21];
    for(int i = 0; i < M; i++){
        scanf("%s", quiz);

        if( quiz[0] >= '0' && quiz[0] <= '9'){
            printf("%s\n",list[atoi(quiz)-1].name);
        }else{
            int find_idx = search_name(quiz,sort_list,N);
            printf("%d\n",find_idx);
        }
    }

    free(sort_list);
    free(list);
    return 0;
}