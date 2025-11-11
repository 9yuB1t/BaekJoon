#include <stdio.h>

int main(){

    double M = 0; //Max
    int N;
    double sum;
    double score[1000];

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%lf", &score[i]);
        if(score[i]>M){
            M = score[i];
        }
    }
    for(int j = 0; j < N; j++){
        score[j] = score[j]/M * 100;
        sum = sum + score[j];
    }
    printf("%lf",sum/N);


    return 0;
}