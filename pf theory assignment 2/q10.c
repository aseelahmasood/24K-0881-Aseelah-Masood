#include <stdio.h>

void printStarPattern(int n) {
    int mid = n / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1 || i == mid || j == mid) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter an odd number for star pattern: ");
    scanf("%d", &n);
    if (n % 2 == 1) {
        printStarPattern(n);
    } else {
        printf("Please enter an odd number.\n");
    }

    return 0;
}
