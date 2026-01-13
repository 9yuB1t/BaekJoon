#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[21];
    int occupied;
}Hash_Table;

#define HASH_TABLE_SIZE 1000003
Hash_Table table[HASH_TABLE_SIZE];
char result[500000][21];

unsigned long get_hash(char *str){
    unsigned long hash = 5381;
    int c;

    while((c = *str++)){
        hash = ((hash << 5) + hash) + c;
    }
    return hash % HASH_TABLE_SIZE;
}

void hash(char *str){
    unsigned long idx = get_hash(str);

    while(strcmp(table[idx].name,str) && table[idx].occupied == 1){
        idx = (idx + 1) % HASH_TABLE_SIZE;
    }

    if(table[idx].occupied == 0){
        strcpy(table[idx].name,str);
        table[idx].occupied = 1;
    }
}

int hash_check(char *str){
    unsigned long idx = get_hash(str);

    while(strcmp(table[idx].name,str) && table[idx].occupied == 1){
        idx = (idx + 1) % HASH_TABLE_SIZE;
    }

    if(table[idx].occupied == 1){
        return 1;
    }
    return 0;
}

int compare(const void *a, const void *b){
    return strcmp((char *)a,(char *)b);
}

int main(){
    int N;
    int M;

    scanf("%d %d",&N,&M);

    for(int i = 0; i < N; i++){
        char temp[21];
        scanf("%s",temp);
        hash(temp);
    }


    int result_idx = 0;
    for(int i = 0; i < M; i++){
        char temp[21];
        scanf("%s",temp);
        int check = hash_check(temp);
        if(check == 1){
            strcpy(result[result_idx],temp);
            result_idx++;
        }
    }
    qsort(result,result_idx,sizeof(char) * 21,compare);

    printf("%d\n",result_idx);
    for(int i = 0; i < result_idx; i++){
        printf("%s\n",result[i]);
    }


    return 0;
}