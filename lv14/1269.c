#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int number;
    int occupied;
}Hash_Table;

#define HASH_SIZE 1000003
Hash_Table table[HASH_SIZE];

int get_hash(int key){
    int h = key % HASH_SIZE;
    return h;
}

void hash(int key){
    int idx = get_hash(key);
    while(table[idx].number != key && table[idx].occupied == 1){
        idx = (idx +1 ) % HASH_SIZE;
    }
    table[idx].number = key;
    table[idx].occupied = 1;
}

int main(){
    int N;
    int M;
    scanf("%d %d",&N,&M);

    for(int i = 0; i < N; i++){
        int temp;
        scanf("%d",&temp);
        hash(temp);
    }
    int count = 0;
    for(int i = 0; i < M; i++){
        int temp;
        scanf("%d",&temp);
        int idx = get_hash(temp);
        while(table[idx].number != temp && table[idx].occupied == 1){
            idx = (idx +1 ) % HASH_SIZE;
        }
        if(table[idx].occupied == 1){
            count++;
        }
    }

    count = N + M - (2 * count);
    printf("%d",count);

    return 0;
}