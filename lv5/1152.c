#include <stdio.h>
#include <string.h>

int main(){

    char s[1000000];
    int count = 0;
    int len;

    fgets(s, sizeof(s),stdin);

    len = (int)strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    if(s[0]!=' '){
        count = 1;
    }

    for(int i = 1; i < len ; i++){
        if(s[i-1] == ' ' && s[i] != ' '){
            count++;
        }
    }
    printf("%d", count);

    return 0;
}