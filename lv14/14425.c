#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b){
    char *str1 = *(char **)a;
    char *str2 = *(char **)b;

    return strcmp(str1, str2);
}

int find(char **target, char *s, int N){
    int low = 0;
    int high = N -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(strcmp(s,target[mid])==0){
            return 1;
        }else if(strcmp(s,target[mid]) < 0){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return 0;
}

int main(){

    int N;
    int M;
    int count = 0;

    scanf("%d %d",&N,&M);

    char **Target = (char **)malloc(sizeof(char *) * N);
    for(int i = 0; i < N; i++){
        Target[i] = (char*)malloc(sizeof(char) * 501);
        scanf("%s", Target[i]);
    }
    qsort(Target, N, sizeof(char *), compare);

    char temp[501];
    for(int i = 0; i < M; i++){
        scanf("%s", temp);
        if (find(Target,temp,N) == 1){
            count++;
        }
    }
    printf("%d", count);

    for(int i = 0; i < N; i++) free(Target[i]);
    free(Target);
    
    return 0;
}