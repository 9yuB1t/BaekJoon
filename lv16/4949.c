#include <stdio.h>
#include <string.h>

#define STACK_SIZE 102
char stack[STACK_SIZE];
int top = -1;

void push(char s){
    top ++;
    stack[top] = s;
}

void pop(){
    top--;
}

int main(){

    char str[STACK_SIZE];
    while(1){

        int flag = 1;
        top = -1;
        fgets(str,sizeof(str),stdin);
        if(str[0] == '.'){
            break;
        }
        int len = strlen(str);
        if(str[len] == '\n' && len > 0){
            str[len] = '\0';
            len --;
        }

        for(int i = 0; i < len; i++){
            switch (str[i])
            {
            case '(':
                push(str[i]);
                break;
            case ')':
                if(top > -1 && stack[top] == '('){
                    pop();
                }else{
                    flag = 0;
                    i = len;
                }
                break;
            case '[':
                push(str[i]);
                break;
            case ']':
                if( top > -1 && stack[top] == '[' ){
                    pop();
                }else{
                    flag = 0;
                    i = len;
                }
                break;
            default:
                break;
            }
        }

        if(flag == 1 && top == -1){
            printf("yes\n");
        }else{
            printf("no\n");
        }
        
    }

    return 0;
}