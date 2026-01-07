#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int num;
    int idx;
    int rank;
}List;

int compare_idx(const void *a, const void *b){
    List *A = (List *)a;
    List *B = (List *)b;
    return A->idx - B->idx;
}
int compare_rank(const void *a, const void *b){
    List *A = (List *)a;
    List *B = (List *)b;
    if(A->num > B->num) return 1;
    if(A->num < B->num) return -1;
    return 0;
}

int main(){

    int N;
    scanf("%d",&N);

    List *list = (List *)malloc(sizeof(List) * N); 
    
    for(int i = 0; i<N;i++){
        scanf("%d", &list[i].num);
        list[i].idx = i;
    }

    qsort(list, N, sizeof(List), compare_rank);

    int rank = 0;
    list[0].rank = 0;

    for(int i = 1; i<N; i++){
        if (list[i].num != list[i-1].num){
            rank++;
        }
            list[i].rank = rank;
    }

    qsort(list, N, sizeof(List), compare_idx);
    for(int i = 0; i<N;i++){
        printf("%d ",list[i].rank);
    }

    free(list);

    return 0;
}