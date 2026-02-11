#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int result = 1;
    
    cin >> N;

    for(int i = 1; i <= N; i++){
        result = result * i;
    }
    cout << result << '\n';

    return 0;
}