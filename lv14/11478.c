#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_SIZE 1000003

typedef struct Node{
    char *str;
    struct Node *next;
} Node;

Node *table[HASH_SIZE];

unsigned long get_hash(char *s, int start, int len) {
    unsigned long hash = 5381;
    for (int i = 0; i < len; i++) {
        hash = ((hash << 5) + hash) + s[start + i];
    }
    return hash % HASH_SIZE;
}

int check_and_insert(char *S, int start, int len) {
    unsigned long idx = get_hash(S, start, len);

    Node *curr = table[idx];
    while (curr != NULL) {
        if ((int)strlen(curr->str) == len && strncmp(curr->str, S + start, len) == 0) {
            return 0;
        }
        curr = curr->next;
    }

    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->str = (char *)malloc(len + 1);
    strncpy(new_node->str, S + start, len);
    new_node->str[len] = '\0';

    new_node->next = table[idx];
    table[idx] = new_node;

    return 1;
}

int main() {
    char S[1001];
    if (scanf("%s", S) != 1) return 0;

    int len = strlen(S);
    int total_distinct = 0;

    for (int i = 0; i < len; i++) {
        for (int j = 1; i + j <= len; j++) {
            if (check_and_insert(S, i, j)) {
                total_distinct++;
            }
        }
    }

    printf("%d\n", total_distinct);

    for (int i = 0; i < HASH_SIZE; i++) {
        Node *curr = table[i];
        while (curr != NULL) {
            Node *temp = curr;
            curr = curr->next;
            free(temp->str);
            free(temp);
        }
    }

    return 0;
}