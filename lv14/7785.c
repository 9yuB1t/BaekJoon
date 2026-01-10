#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[6];
    char status[6];
}Access;

int compare(const void *a, const void *b){
    Access *A = (Access*)a;
    Access *B = (Access*)b;

    return strcmp(B->name,A->name);
}

int main(){

    int N;
    scanf("%d", &N);

    Access *office = (Access *)malloc(sizeof(Access) * N);

    for(int i = 0; i < N; i++){
        scanf("%s %s",office[i].name, office[i].status);
    }
    qsort(office,N,sizeof(Access),compare);
    for(int i = 0; i < N; i++){
        if(i < N -1 && strcmp(office[i].name,office[i+1].name)==0){
            continue;
        }
        if(strcmp(office[i].status,"enter")==0){
            printf("%s\n",office[i].name);
        }
    }

    free(office);

    return 0;
}