//실시간 출력 방법
#include <stdio.h>
#include <math.h>

void cantor_set(int size){
    if(size == 1){
        printf("-");
        return;
    }
    int unit = size / 3;

    cantor_set(unit);
    for(int i = 0; i < unit; i++) printf(" ");
    cantor_set(unit);

}

int main(){
    int N;
    while(scanf("%d",&N) != EOF){
        int len = pow(3,N);
        cantor_set(len);
        printf("\n");
    }
    return 0;
}


/*배열 처리 방법
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

char *arr;

void cantor_set(int start, int size){
    if(size == 1) return;

    int unit = size / 3;

    for(int i = start + unit; i < start + unit * 2; i++){
        arr[i] = ' ';
    }

    cantor_set(start, unit);
    cantor_set(start + unit *2, unit);

}

int main(){
    int N;
    while(scanf("%d",&N) != EOF){
        int len = (int)pow(3,N);
        arr = (char*)malloc(sizeof(char) * (len + 1));

        for(int i = 0; i < len; i++) arr[i] = '-';
        arr[len] = '\0';

        cantor_set(0, len);

        printf("%s\n",arr);
        free(arr);
    }
    return 0;
}
    */