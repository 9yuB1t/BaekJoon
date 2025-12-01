#include <stdio.h>

int main(){

    int sum = 0;
    int num[5];
    for(int i = 0; i < 5; i++){
        scanf("%d",&num[i]);
        sum = sum + num[i];
    }
    for(int j = 0; j < 4; j++){
        for(int k = j+1; k < 5; k++){
            if(num[j]>num[k]){
                int temp = num[j];
                num[j] = num[k];
                num[k] = temp;
            }
        }
    }
    printf("%d\n%d",sum/5,num[2]);


    return 0;
}