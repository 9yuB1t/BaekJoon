#include <stdio.h>
#include <string.h>

#define QUEUE_SIZE 2000001
int queue[QUEUE_SIZE];
int f = 0;
int r = 0;

void push(int X){
    queue[r] = X;
    r++;
}

int pop(){
    if( f == r ){
        return -1;
    }else{
        int X = queue[f];
        f++;
        return X;
    }
}

int size(){
    return r - f;
}

int empty(){
    if(f == r){
        return 1;
    }else{
        return 0;
    }   
}

int front(){
    if(f == r){
        return -1;
    }else{
        return queue[f];
    }
}

int back(){
    if(f == r){
        return -1;
    }else{
        return queue[r - 1];
    }
}

int main(){

    int N;
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        char command[7];
        int X;
        scanf("%s",command);

        if(strcmp(command,"push") == 0){
            scanf("%d",&X);
            push(X);
        }else if(strcmp(command,"pop") == 0){
            printf("%d\n",pop());
        }else if(strcmp(command, "size") == 0){
            printf("%d\n",size());
        }else if(strcmp(command,"empty") == 0){
            printf("%d\n",empty());
        }else if(strcmp(command,"front") == 0){
            printf("%d\n",front());
        }else if(strcmp(command,"back") == 0){
            printf("%d\n",back());
        }
    }
    
    return 0;
}