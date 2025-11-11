#include <stdio.h>

int main(){

    int N, M;
    int i, j;
    int temp;
    int basket[100];

    scanf("%d %d", &N, &M);
    for(int basketNum = 0; basketNum < N; basketNum++){
        basket[basketNum] = basketNum + 1;
    }

    for(int basektChange = 0; basektChange < M; basektChange++){
        scanf("%d %d", &i, &j);
        int start = i - 1;
        int end = j - 1;
        while (start < end)
        {
            temp = basket[start];
            basket[start] = basket[end];
            basket[end] = temp;

            start++;
            end--;
        }
    }

    for(int basketNum = 0; basketNum < N; basketNum++){
        printf("%d ",basket[basketNum]);
    }

    return 0;
}