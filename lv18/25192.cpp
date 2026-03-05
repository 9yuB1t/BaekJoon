#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int count = 0;
    string temp;
    unordered_set<string> table;
    table.reserve(100002);

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> temp;
        if(temp == "ENTER"){
            //swap 방식
            unordered_set<string> empty;
            table.swap(empty);
        }else{
            // insert는 주소값, 중복여부(false는 중복)
            if(table.insert(temp).second == true){
                count++;
            }
        }

    }

    cout << count << '\n';
    return 0;
}