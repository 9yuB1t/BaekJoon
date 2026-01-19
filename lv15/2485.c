#include <stdio.h>

int gcb(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){

    int N;
    int first;
    int prev;
    int current;

    scanf("%d",&N);
    scanf("%d",&first);

    prev = first;
    int total_gcb = 0;

    for(int i = 1; i < N; i++){
        scanf("%d",&current);
        int dist = current - prev;
        total_gcb = gcb(dist, total_gcb);

        prev = current;
    }

    int total_tree = (current - first) / total_gcb + 1;
    printf("%d",total_tree - N);


    return 0;
}