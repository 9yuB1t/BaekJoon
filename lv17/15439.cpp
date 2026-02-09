#include <iostream>

using namespace std;

int main(){

    //실전에서는 사용 X, 백준과 같은 코테에서 보통 사용함
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;
    cout << N * (N-1) << "\n";

    return 0;
}