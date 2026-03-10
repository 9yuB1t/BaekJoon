#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    
    unordered_map<string, bool> dance;
    dance["ChongChong"] = true;
    int count = 1;

    string left;
    string right;
    for(int i = 0; i < N; i++){
        cin >> left >> right;
        
        if(dance[left] == true || dance[right] == true){
            if(dance[left] != dance[right]){
                dance[left] = true;
                dance[right] = true;
                count++;
            }
        }
    }
    cout << count << '\n';

    return 0;
}