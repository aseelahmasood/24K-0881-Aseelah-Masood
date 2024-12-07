#include <stdio.h>

int findFirstTurn(int matchsticks) {
    if (matchsticks % 5 == 0) return -1;
    return matchsticks % 5;
}

int main() {
    int matchsticks;
    printf("Enter the number of matchsticks: ");
    scanf("%d", &matchsticks);
    printf("A should pick %d matchstick(s) on the first turn.\n", findFirstTurn(matchsticks));
    return 0;
}
