#include <iostream>
#include <string>
using namespace std;

int cnt;

int recursion(const string_view s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const string_view s){
    cnt = 0;
    return recursion(s, 0, s.length()-1);
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    string temp;
    for(int i = 0; i < N; i++){
        cin >> temp;
        int result = isPalindrome(temp);
        cout << result << " " << cnt << '\n';
    }

    return 0;
}