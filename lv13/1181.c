#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char str[51];
    int len;
} Word;

int compare(const void *a, const void *b) {
    Word *A = (Word *)a;
    Word *B = (Word *)b;
    if (A->len != B->len) {
        return A->len - B->len;
    }
    return strcmp(A->str, B->str);
}

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    Word *list = (Word *)malloc(sizeof(Word) * N);

    for (int i = 0; i < N; i++) {
        scanf("%s", list[i].str);
        list[i].len = strlen(list[i].str);
    }
    qsort(list, N, sizeof(Word), compare);

    for (int i = 0; i < N; i++) {
        if (i > 0 && strcmp(list[i].str, list[i - 1].str) == 0) {
            continue;
        }
        printf("%s\n", list[i].str);
    }

    free(list); // 동적 할당 해제
    return 0;
}