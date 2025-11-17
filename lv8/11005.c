#include <stdio.h>
#include <string.h>
#include <math.h>

char numtoch(int num){
    if(num >= 10){
        return (char)num + 'A' - 10;
    }else{
        return (char)num + '0';
    }
}


int main(){
    int B;
    int N;
    char temp;
    int index = 0;
    char result[100] = {0};
    scanf("%d",&N);
    scanf("%d",&B);

    while(N > 0){
        result[index] = numtoch(N % B);
        N = N / B;
        index++;
    }
    for(int i = 0; i < index/2; i++){
        temp = result[i];
        result[i] = result[index-i-1];
        result[index-i-1] = temp;
    }

    printf("%s",result);

    return 0;
}