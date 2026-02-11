#include <iostream>
using namespace std;

int fact(int N){
    int r = 1;
    for(int i = 1; i <= N; i++){
        r = r * i;
    }
    return r;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int K;

    cin >> N >> K;
    cout << fact(N)/(fact(N-K) * fact(K)) << '\n';

    return 0;
}