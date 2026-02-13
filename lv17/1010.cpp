#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long C[31][31] = {0};
    for (int i = 0; i <= 30; i++) {
        C[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        cout << C[M][N] << "\n";
    }

    return 0;
}