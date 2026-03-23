#include <stdio.h>
#include <math.h>

void hanoi(int n, int from, int tmp, int to) {
    if (n == 1) {
        printf("%d %d\n", from, to);
        return;
    }

    hanoi(n - 1, from, to, tmp);

    printf("%d %d\n", from, to);

    hanoi(n - 1, tmp, from, to);
}

int main() {
    int N;
    scanf("%d", &N);

    int count = (1 << N) - 1;
    printf("%d\n", count);

    hanoi(N, 1, 2, 3);

    return 0;
}