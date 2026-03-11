#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int freq_count[8002] = {0};
    int arr[500001];

    int sum = 0;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        sum += arr[i];
        freq_count[arr[i] + 4000]++;
    }

    sort(arr, arr+N);

    int avg = round((double)sum / N);

    int max_freq = 0;
    int max_count = 0;
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

    cout << avg << '\n' << arr[N/2] << '\n' << max_freq << '\n' << arr[N-1] - arr[0] << '\n';

    return 0;
}