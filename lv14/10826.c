#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    int count;
    int occupied;
}hash_table;

#define Hash_Size 1000003 //소수(Prime Number)
hash_table Table[Hash_Size];

int hash(int key){
    int h = key % Hash_Size;
    if (h < 0) h += Hash_Size;
    return h;
}

void insert(int key){
    int idx = hash(key);
    while(Table[idx].occupied == 1 && Table[idx].data != key){
        idx = (idx + 1) % Hash_Size;
    }

    if(Table[idx].occupied != 0){
        Table[idx].count++;
    }else{
        Table[idx].data = key;
        Table[idx].count = 1;
        Table[idx].occupied = 1;
    }
}

int main(){
    int N;
    int M;
    
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        int temp;
        scanf("%d",&temp);
        insert(temp);
    }

    scanf("%d",&M);
    int *arr = (int *)malloc(sizeof(int) * M);
    for(int i = 0; i < M; i++){
        int temp;
        scanf("%d",&temp);
        int idx = hash(temp);
        while(Table[idx].occupied == 1 && Table[idx].data != temp){
            idx = (idx + 1) % Hash_Size;
        }
        arr[i] = Table[idx].count;
    }
    for(int i = 0; i < M; i++){
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}