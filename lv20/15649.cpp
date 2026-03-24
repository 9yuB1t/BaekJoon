#include <iostream>
#include <vector>
using namespace std;

int N, M;
bool visited[9];
vector<int> result;

void solve(int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            result.push_back(i);
            solve(cnt + 1);
            result.pop_back();
            visited[i] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    solve(0);

    return 0;
}