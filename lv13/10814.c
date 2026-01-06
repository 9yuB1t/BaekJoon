#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int age;
    char name[101];
    int index;
}User;

int compare(const void *a, const void *b){
    User *A = (User *)a;
    User *B = (User *)b;

    if(A->age == B->age){
        return A->index - B->index;
    }
    return A->age - B->age;
}


int main(){

    int N;
    scanf("%d",&N);

    User *list = (User *)malloc(sizeof( User) * N);
    for (int i = 0; i < N; i++){
        scanf("%d %s",&list[i].age, list[i].name);
        list[i].index = i;
    }
    qsort(list,N,sizeof(User),compare);

    for(int j = 0; j < N; j++){
        printf("%d %s\n",list[j].age,list[j].name);
    }

    return 0;
}