#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int static compare(const void* first, const void* second){
    int a = *(int*)first;
    int b = *(int*)second;
    if(a>b) return 1;
    if(a<b) return -1;
    return 0;
}

int main(){

    int N;
    int sum = 0;
    double avg = 0;
    int max_freq = 0;
    int max_count = 0;
    int center = 0;
    int range = 0; 

    int freq_count[8002] = {0};
    int arr[500001];

    scanf("%d",&N);

    for(int i = 0; i < N; i ++){
        int temp;
        scanf("%d", &temp);
        sum += temp;
        freq_count[temp+4000]++;
        arr[i] = temp;
    }
    qsort(arr,N,sizeof(int),compare);
    avg = round((double)sum/N);
    center = arr[N/2];
    range = arr[N-1] - arr[0];

    int flag = 0;
    for(int i = 0; i < 8002; i++){
        if(freq_count[i] == 0) continue;

        if(freq_count[i] > max_count){
            max_count = freq_count[i];
            max_freq = i - 4000;
            flag = 0;
        }else if(freq_count[i] == max_count && flag == 0){
            max_freq = i - 4000;
            flag = 1;
        }
    }

    printf("%d\n%d\n%d\n%d\n",(int)avg,center,max_freq,range);

    return 0;
}