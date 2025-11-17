#include <stdio.h>
#include <string.h>
#include <math.h>

int chtonum(char alpha){
    if(alpha >= 65 && alpha <= 90){
        return (int)alpha - 55;
    }else if(alpha >= 97 && alpha <= 122){
        return (int)alpha - 87;
    }else{
        return (int)alpha - 48;
    }
}


int main(){
    int B;
    char N[100];
    int len;
    int result = 0;
    scanf("%s",N);
    scanf("%d",&B);

    len = (int)strlen(N);
    if(len > 0 && N[len-1] == '\n'){
        N[len-1] = '\0';
        len--;
    }

    for(int i = 0; i < len; i++){
        result = result + pow(B,len-i-1) * chtonum(N[i]);
    }
    printf("%d",result);

    return 0;
}