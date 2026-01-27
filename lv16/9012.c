#include <stdio.h>
#include <string.h>

#define STACK_SIZE 51
char stack[STACK_SIZE];
int top = -1;

void push(char c){
    top++;
    stack[top] = c;
}

void pop(){
    top--;
}

int main(){

    int T;
    scanf("%d",&T);
    
    for(int i = 0; i < T; i++){
        int check_vps = 1;
        char str[51];
        top = -1;
        scanf("%s",str);
        for(int j = 0; j < strlen(str); j++){
            if(str[j] == '(' && top < STACK_SIZE){
                push(str[j]);
            }else if(str[j] == ')' && top > -1){
                pop();
            }else{
                check_vps = 0;
                break;
            }
        }
        if(top == -1 && check_vps == 1){
            check_vps = 1;
        }else{
            check_vps = 0;
        }

        if(check_vps == 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}