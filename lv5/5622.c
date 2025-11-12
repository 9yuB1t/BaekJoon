#include <stdio.h>
#include <string.h>

int main() {

    const char* mapping[] = {"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
    char phone[17];
    int len;
    int time = 0;

    fgets(phone, sizeof(phone),stdin);
    len = (int)strlen(phone);
    if( len > 0 && phone[len -1] == '\n'){
        phone[len-1] = '\0';
        len--;
    }

    for(int i = 0; i < len; i++){
        for(int j = 0; j < 8; j++){
            if(strchr(mapping[j],phone[i])){
                time = time + j + 3;
                break;
            }
        }
    }

    printf("%d", time);
    return 0;
}