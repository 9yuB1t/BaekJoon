#include <stdio.h>
#include <string.h>

int main() {
    int len;
    char word[1000002];
    int alphacount[26] = {0};
    int max = 0;
    int index;
    int count = 0;;
    fgets(word,sizeof(word),stdin);

    len = (int)strlen(word);
    if( len > 0 && word[len-1] == '\n'){
        word[len-1] = '\0';
        len--;
    }

    for(int i = 0; i < len; i++){
        if((int)word[i]>=97 && (int)word[i]<=122){
            alphacount[(int)word[i]-97]++;
        }else if((int)word[i]>=65 && (int)word[i]<=90){
            alphacount[(int)word[i]-65]++;
        }
    }
    for(int j = 0; j < 26; j++){
        if(alphacount[j] > max){
            max = alphacount[j];
            index = j;
        }
    }

    for(int k = 0; k < 26; k++){
        if(alphacount[k] == max){
            count++;
        }
    }

    if(count > 1){
        printf("?");
    }else{
        printf("%c",index+65);
    }

    return 0;
}