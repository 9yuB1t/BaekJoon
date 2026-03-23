#include <iostream>
using namespace std;

void hanoi(int n, int from, int tmp, int to) {
    if (n == 1) {
        cout << from << " " << to << "\n";
        return;
    }
    hanoi(n - 1, from, to, tmp);

    cout << from << " " << to << "\n";

    hanoi(n - 1, tmp, from, to);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    cout << (1 << N) - 1 << "\n";
    hanoi(N, 1, 2, 3);

    return 0;
}