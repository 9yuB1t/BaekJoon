#include <stdio.h>
#include <stdlib.h>

#define QUEUESTACK_SIZE 200003
int queuestack[QUEUESTACK_SIZE];

int front = 0;
int back = 0;

void front_in(int num){
    front = (front - 1 + QUEUESTACK_SIZE) % QUEUESTACK_SIZE;
    queuestack[front] = num;
}

void back_in(int num){
    queuestack[back] = num;
    back = (back + 1) % QUEUESTACK_SIZE;
}

int front_out(){
    int num = queuestack[front];
    front = (front + 1) % QUEUESTACK_SIZE;
    return num;
}

int back_out(){
    back = (back - 1 + QUEUESTACK_SIZE) % QUEUESTACK_SIZE;
    int num = queuestack[back];
    return num;
}

int main(){
    int N;
    scanf("%d", &N);
    int temp;
    int *temp_array = (int *)malloc(sizeof(int) * N);
    for(int i = 0; i < N; i++){
        scanf("%d", &temp_array[i]);
    }
    for(int i = 0; i < N; i++){
        scanf("%d", &temp);
        if(temp_array[i] == 0){
            back_in(temp);
        }
    }

    int M;
    scanf("%d",&M);
    for(int i = 0; i < M; i++){
        scanf("%d", &temp);
        front_in(temp);
        int out = back_out();
        if(M - 1 == i){
            printf("%d",out);
        }else{
            printf("%d ",out);
        }
    }

    free(temp_array);
}