#include <stdio.h>
int N, M;
int result[9];
int visited[9];

void solve(int depth) {
    if (depth == M) {
        for (int i = 0; i < M; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            visited[i] = 1;
            result[depth] = i;
            solve(depth + 1);
            visited[i] = 0;
        }
    }
}

int main() {
    scanf("%d %d", &N, &M);

    solve(0);

    return 0;
}