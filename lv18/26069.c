#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[21];
    int occupied;
    int is_dancing;
}HASH;

#define HASH_SIZE 4001
HASH table[HASH_SIZE];

unsigned long hash(char *str){
    unsigned long hash = 5381;
    int c;

    while((c = *str++)){
        hash = (hash << 5) + hash + c;
    }
    return hash % HASH_SIZE;
}

unsigned long insert_return_hash(char *str){
    unsigned long idx = hash(str);

    while(table[idx].occupied == 1 && strcmp(table[idx].name,str)){
        idx = (idx + 1) % HASH_SIZE;
    }

    if(table[idx].occupied == 0){
        strcpy(table[idx].name, str);
        table[idx].occupied = 1;
    }
    
    return idx;
}

int main(){
    int N;
    char temp_right[21];
    char temp_left[21];
    int count = 1;

    scanf("%d",&N);

    unsigned long idx = insert_return_hash("ChongChong");
    table[idx].is_dancing = 1;

    for(int i = 0; i < N; i++){
        scanf("%s %s",temp_left, temp_right);
        unsigned long idx_left = insert_return_hash(temp_left);
        unsigned long idx_right = insert_return_hash(temp_right);

        if(table[idx_left].is_dancing == 1 || table[idx_right].is_dancing == 1){
            if(table[idx_left].is_dancing != table[idx_right].is_dancing){
                table[idx_left].is_dancing = 1;
                table[idx_right].is_dancing = 1;
                count++;
            }
        }
    }

    printf("%d",count);

    return 0;
}