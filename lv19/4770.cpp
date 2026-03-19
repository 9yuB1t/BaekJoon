//실시간 출력 방법
/*
#include <iostream>
#include <cmath>
using namespace std;

void cantor_set(int size){
    if(size == 1){
        cout << '-';
        return;
    }

    int unit = size / 3;
    cantor_set(unit);
    cout << string(unit,' ');
    cantor_set(unit);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    while(cin >> N){
        int len = (int)pow(3,N);
        cantor_set(len);
        cout << '\n';
    }

    return 0;
}
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<char> v;

void cantor_set(int start, int size){
    if(size == 1) return;

    int unit = size / 3;

    for(int i = start + unit; i < start + unit * 2; i++){
        v[i] = ' ';
    }
    cantor_set(start, unit);
    cantor_set(start + unit * 2, unit);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    while(cin >> N){
        int len = pow(3,N);
        v.assign(len,'-');

        cantor_set(0,len);

        for(char c : v) cout << c;
        cout << '\n';
    }
    return 0;
}