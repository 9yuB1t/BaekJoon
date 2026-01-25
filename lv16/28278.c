#include <stdio.h>

#define STACK_SIZE 1000001
int stack[STACK_SIZE];
int top = -1;

void push(int number){
    stack[top] = number;
}

int pop(){
    return stack[top];
}

int main(){
    int N;
    scanf("%d",&N);
    
    for(int i = 0; i < N; i++){
        int instruction;
        scanf("%d",&instruction);

        int temp;
        switch (instruction)
        {
        case 1:

            scanf("%d",&temp);
            top++;
            if(top >= STACK_SIZE){
                printf("OverFlow\n");
            }else{
                push(temp);
            }
            break;

        case 2:
            if(top < 0){
                printf("-1\n");
            }else{
                temp = pop();
                printf("%d\n",temp);
                top--;
            }
            break;

        case 3:
            printf("%d\n",top + 1);
            break;
        case 4:
            if(top == -1){
                printf("1\n");
            }else{
                printf("0\n");
            }
            break;
        case 5:
            if(top == -1){
                printf("-1\n");
            }else{
                temp = pop();
                printf("%d\n",temp);
            }
            
            break;
        
        default:
            break;
        }
    }

    return 0;
}