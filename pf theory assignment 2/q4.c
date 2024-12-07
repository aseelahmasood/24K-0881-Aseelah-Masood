#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compareStrings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char *transactions[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int n = sizeof(transactions) / sizeof(transactions[0]);

    qsort(transactions, n, sizeof(char *), compareStrings);

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("\"%s\"", transactions[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
