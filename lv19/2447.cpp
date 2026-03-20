#include <iostream>
#include <vector>
using namespace std;

void star(int n, int i, int j, vector<vector <char>>& arr){
    if(n == 1){
        arr[i][j] = '*';
        return;
    }

    int unit = n / 3;

    for(int small_i = 0; small_i < 3; small_i++){
        for(int small_j = 0; small_j < 3; small_j++){
            if(small_i == 1 && small_j == 1) continue;
            star(unit, i + small_i * unit, j + small_j * unit, arr);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<vector <char>> arr(N, vector<char>(N, ' '));

    star(N, 0, 0, arr);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }

    return 0;
}

//재귀 x
/*
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int row = i;
            int col = j;
            int is_blank = 0;

            while(row > 0){
                if(row % 3 == 1 && col % 3 ==1){
                    is_blank = 1;
                    break;
                }
                row /= 3;
                col /= 3;
            }
            if(is_blank) cout << ' ';
            else cout << '*';
        }
        cout << '\n';
    }
    return 0;
}
*/