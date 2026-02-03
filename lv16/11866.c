#include <stdio.h>

#define QUEUE_SIZE 1002
int queue[QUEUE_SIZE];
int front = 0;
int back = 0;

int dequeue(){
    int num = queue[front];
    front = (front+1) % QUEUE_SIZE;
    return num;
}

void enqueue(int num){
    queue[back] = num;
    back = (back+1) % QUEUE_SIZE;
}

int size(){
    return (QUEUE_SIZE + back - front) % QUEUE_SIZE;
}

int main(){

    int N;
    int K;
    scanf("%d %d",&N,&K);

    for(int i = 0; i < N; i++){
        enqueue(i + 1);
    }

    printf("<");
    while(size() > 0){
        for(int i = 0; i < K -1; i++){
            enqueue(dequeue());
        }

        int removed = dequeue();
        if(size() == 0){
            printf("%d",removed);
        }else{
            printf("%d, ",removed);
        }
    }
    printf(">\n");

    return 0;
}