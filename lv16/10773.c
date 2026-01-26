#include <stdio.h>

#define STACK_SIZE 100001
int stack[STACK_SIZE];
int top = -1;

void push(int num){
    top++;
    stack[top] = num;
}

void pop(){
    top--;
}

int main(){
    int sum = 0;
    int K;

    scanf("%d",&K);
    
    for(int i = 0; i < K; i++){
        int num;
        scanf("%d",&num);

        if(num == 0){
            pop();
        }else{
            push(num);
        }
    }

    for(int j = 0; j <= top; j++){
        sum += stack[j];
    }
    printf("%d\n",sum);

}