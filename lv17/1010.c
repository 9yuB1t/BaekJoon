#include <stdio.h>

int main() {
    long long bridge[31][31] = {0};

    for (int i = 0; i <= 30; i++) {
        bridge[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            bridge[i][j] = bridge[i - 1][j - 1] + bridge[i - 1][j];
        }
    }

    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);
        printf("%lld\n", bridge[M][N]);
    }

    return 0;
}