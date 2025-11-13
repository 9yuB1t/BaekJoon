#include <stdio.h>
#include <string.h>

int main(){

    char pal[102];
    int len;
    int result = 1;

    fgets(pal,sizeof(pal),stdin);

    len = (int)strlen(pal);
    if(len > 0 && pal[len-1] == '\n'){
        pal[len-1] = '\0';
        len--;
    }

    for(int i = 0; i < len/2; i++){
        if(pal[i] != pal[len-i-1]){
            result = 0;
            break;
        }
    }
    printf("%d",result);

    return 0;
}