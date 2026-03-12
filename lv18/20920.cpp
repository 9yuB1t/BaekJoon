#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

typedef struct
{
    string name;
    int freq;
}Word;

bool compare(const Word &a, const Word &b){
    if(a.freq != b.freq) return a.freq > b.freq;
    if(a.name.length() != b.name.length()) return a.name.length() > b.name.length();
    return a.name < b.name;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int min_len;
    cin >> N >> min_len;

    unordered_map<string, int> table;
    
    string temp;
    int check_len;

    for(int i = 0; i < N; i++){
        cin >> temp;
        check_len = temp.length();
        if(check_len < min_len){
            continue;
        }
        table[temp]++;
    }

    int sorted_len = 0;
    vector<Word> v;
    for(const auto& element : table){
        v.push_back({element.first,element.second});
    }
    sort(v.begin(),v.end(),compare);

    for(const auto& w : v){
        cout << w.name << '\n';
    }

}