#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    for(int fivecount = N / 5; fivecount >= 0; fivecount--){

        int weight = N - (fivecount * 5);

        if(weight % 3 == 0){
            int threecount = weight / 3;

            printf("%d",fivecount + threecount);
            return 0;
        }
    }
    printf("-1");

    return 0;
}