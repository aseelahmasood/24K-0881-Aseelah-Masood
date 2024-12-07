#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWS 6
#define COLS 5

void generateRandomGrid(char grid[ROWS][COLS]) {
    char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < ROWS - 1; i++) {
        for (int j = 0; j < COLS; j++) {
            grid[i][j] = chars[rand() % 26];
        }
    }
    sprintf(grid[ROWS-1], "1234Q");
}

int searchInGrid(char grid[ROWS][COLS], char *search) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (grid[i][j] == search[0]) {
                int found = 1;
                for (int k = 1; search[k] != '\0'; k++) {
                    if (grid[i][j + k] != search[k]) {
                        found = 0;
                        break;
                    }
                }
                if (found) return 1;
            }
        }
    }
    return 0;
}

int main() {
    char grid[ROWS][COLS];
    char search[100];
    int score = 0;
    generateRandomGrid(grid);

    while (1) {
        printf("Search Str= ");
        scanf("%s", search);
        if (strcmp(search, "END") == 0) break;
        if (searchInGrid(grid, search)) {
            score++;
            printf("%s is present Score %d\n", search, score);
        } else {
            score--;
            printf("%s is not present Score %d\n", search, score);
        }
    }

    return 0;
}
