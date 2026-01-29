#include <stdio.h>

#define STACK_SIZE 1001
int stack[STACK_SIZE];
int top = -1;

void push(int num){
    top++;
    stack[top] = num;
}

int pop(){
    int num = stack[top];
    top--;
    return num;
}

int main(){
    
    int N;
    int current_num = 1;
    int temp = 0;

    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        scanf("%d",&temp);
        if(current_num == temp){
            current_num++;
        }else{
            push(temp);
        }
        
        while(top != -1 && stack[top] == current_num){
            pop();
            current_num++;
        }
    }

    while(top != -1 && stack[top] == current_num){
            pop();
            current_num++;
    }

    if( top != -1){
        printf("Sad\n");
    }else{
        printf("Nice\n");
    }


    return 0;
}
