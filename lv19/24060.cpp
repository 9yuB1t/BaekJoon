#include <iostream>
#include <vector>
using namespace std;

int cnt;
int result = -1;
vector<int> tmp;
int K;

void merge(vector<int> &arr, int L, int mid, int R){
    int i = L;
    int j = mid + 1;
    int t = 0;

    while(i <= mid && j <= R){
        if(arr[i] <= arr[j]) tmp[t++] = arr[i++];
        else tmp[t++] = arr[j++];
    }

    while(i <= mid) tmp[t++] = arr[i++];
    while(j <= R) tmp[t++] = arr[j++];

    i = L;
    t = 0;
    while(i <= R){
        cnt++;
        if(cnt == K) result = tmp[t];
        arr[i++] = tmp[t++];
    }

}

void merge_sort(vector<int> &arr, int L, int R){
    int mid = (L + R) / 2;
    if(L < R){
        merge_sort(arr, L, mid);
        merge_sort(arr, mid +1, R);
        merge(arr, L, mid, R);
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N >> K;

    vector<int> arr(N);
    tmp.resize(N);

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    merge_sort(arr, 0, N-1);

    cout << result << '\n';

}