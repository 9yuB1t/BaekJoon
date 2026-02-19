#include <stdio.h>

int main(){
    int max = 1;
    int min = 1000001;
    int N;
    int temp;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d",&temp);
        if(max < temp){
            max = temp;
        }
        if(min > temp){
            min = temp;
        }
    }
    printf("%lld\n", (long long)max * min);
    return 0;
}