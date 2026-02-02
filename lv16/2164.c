#include <stdio.h>

#define QUEUE_SIZE 500005
int queue[QUEUE_SIZE];
int front = 0;
int back = 0;

void enqueue(int num){
    queue[back] = num;
    back = (back+1) % QUEUE_SIZE;
}

int dequeue(){
    int num = queue[front];
    front = (front+1) % QUEUE_SIZE;
    return num;
}

int size(){
    return (back - front + QUEUE_SIZE) % QUEUE_SIZE;
}

int main(){

    int N;
    scanf("%d",&N);

    for(int i = 0; i < N; i++){
        enqueue(i+1);
    }

    while(size() > 1){
        dequeue();
        enqueue(dequeue());
    }

    printf("%d",dequeue());

    return 0;
}