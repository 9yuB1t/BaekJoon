#include <stdio.h>
#include <string.h>

int main(){

    int alpha[26];
    char string[100];
    scanf("%s", string);

    for(int k = 0; k < 26; k++){
        alpha[k] = -1;
    }

    for(int i = 0; i < (int)strlen(string); i++){
        
        if(alpha[(int)string[i]-97] == -1){
            alpha[(int)string[i]-97] = i;
        }
    }
    for(int j = 0; j < 26; j++){
        printf("%d ",alpha[j]);
    }
    
    return 0;
}