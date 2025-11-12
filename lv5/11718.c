#include <stdio.h>
#include <string.h>

int main(){

    char X[102];

    while(fgets(X,sizeof(X),stdin)!=NULL){
        printf("%s",X);
    }

    return 0;
}