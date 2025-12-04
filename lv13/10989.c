#include <stdio.h>

int main() {

    int N;
    int count[10001] = {0};
    int num;

    scanf("%d",&N);

    for(int i = 0; i < N; i++){
        scanf("%d",&num);
        count[num]++;
    }
    for(int j = 0; j < 10001; j++){
        for(int k = 0; k < count[j]; k++){
            printf("%d\n",j);
        }
    }
    
    return 0;
}