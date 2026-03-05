#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    char name[21];
    int current_id;
}HASH_TABLE;

#define HASH_SIZE 200023
HASH_TABLE table[HASH_SIZE];
int check_id = 0;

unsigned long get_hash(char *str){
    //hash table에 넣을 index값(hash) 찾기
    unsigned long hash = 5381;
    int c;

    while((c = *str++)){
        hash = (hash << 5) + hash + c;
    }
    return hash % HASH_SIZE;
}

int insert_check_hash(char *str){
    //hash table에 넣고 중복! 0, 중복 1
    unsigned long idx = get_hash(str);

    while(table[idx].current_id == check_id && strcmp(table[idx].name,str)){
        idx = (idx + 1) % HASH_SIZE;
    }

    if(table[idx].current_id != check_id){
        strcpy(table[idx].name, str);
        table[idx].current_id = check_id;
        return 0;
    }else{
        return 1;
    }
}

int main(){

    int N;
    int count = 0;
    int len;
    char temp[21];
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        scanf("%s",temp);
        len = strlen(temp);

        if(strcmp(temp,"ENTER") == 0){
            check_id++;
        }else{
            if(insert_check_hash(temp) == 0){
                count++;
            }
        }
    }

    printf("%d",count);

    return 0;
}