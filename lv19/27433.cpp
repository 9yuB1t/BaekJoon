#include <iostream>
using namespace std;

long long fact(long long N){
    if(N <= 1) return 1;
    return N * fact(N-1);
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    cin >> N;
    cout << fact(N) << '\n';

    return 0;
}