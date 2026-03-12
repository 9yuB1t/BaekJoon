#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int freq;
    int len;
    char name[11];
}HASH_TABLE;

#define HASH_SIZE 200017
HASH_TABLE table[HASH_SIZE];

unsigned long hash(char *str){
    unsigned long hash = 5381;
    int c;

    while((c = *str++)){
        hash = (hash << 5) + hash + c;
    }
    return hash % HASH_SIZE;
}

void insert_hash(char *str){
    unsigned long idx = hash(str);

    while(table[idx].name[0] != '\0' && strcmp(table[idx].name,str)){
        idx = (idx +1) % HASH_SIZE;
    }

    if(table[idx].name[0] == '\0'){
        strcpy(table[idx].name,str);
        table[idx].len = strlen(str);
        table[idx].freq = 0;
    }
    table[idx].freq++;
}

int compare(const void *a, const void *b){
    HASH_TABLE *t1 = (HASH_TABLE*)a;
    HASH_TABLE *t2 = (HASH_TABLE*)b;
    
    if(t1->freq != t2->freq) return t2->freq - t1->freq;
    if(t1->len != t2->len) return t2->len - t1->len;
    return strcmp(t1->name,t2->name);
}

int main(){

    int N;
    int min_len;
    scanf("%d %d", &N, &min_len);
    HASH_TABLE *sorted = (HASH_TABLE*)malloc(sizeof(HASH_TABLE) * N);
    if(sorted == NULL) return -1;

    char temp[11];
    int check_len;
    for(int i = 0; i < N; i++){
        scanf("%s",temp);
        check_len = strlen(temp);
        if(check_len < min_len){
            continue;
        }
        insert_hash(temp);
    }

    int sorted_len = 0;
    for(int i = 0; i < HASH_SIZE; i++){
        if(table[i].name[0] != '\0') {
            sorted[sorted_len++] = table[i];
        }
    }
    qsort(sorted,sorted_len,sizeof(HASH_TABLE),compare);

    for(int i = 0; i < sorted_len; i++){
        printf("%s\n",sorted[i].name);
    }
    
    free(sorted);
    return 0;
}