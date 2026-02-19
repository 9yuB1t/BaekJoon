#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int max_val = -1;
    int min_val = 1000001;
    int N;
    int temp;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> temp;
        max_val = max(max_val, temp);
        min_val = min(min_val, temp); 
    }
    cout << (long long)max_val * min_val << '\n';

    return 0;
}