#include <stdio.h>

#define N 5

void displayGrid(char grid[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char grid[5][5] = {
        {' ', ' ', 'I', 'X', ' '},
        {' ', 'X', ' ', ' ', ' '},
        {'I', ' ', 'X', 'X', ' '},
        {' ', ' ', ' ', 'I', 'X'},
        {' ', 'X', ' ', ' ', 'P'}
    };

    int px = 4, py = 4;
    char move;
    while (1) {
        displayGrid(grid);
        printf("Enter move (W/A/S/D to move, Q to quit): ");
        scanf(" %c", &move);

        if (move == 'Q') break;

        int nx = px, ny = py;
        if (move == 'W') nx--;
        if (move == 'S') nx++;
        if (move == 'A') ny--;
        if (move == 'D') ny++;

        if (nx >= 0 && nx < N && ny >= 0 && ny < N && grid[nx][ny] != 'X') {
            if (grid[nx][ny] == 'I') {
                grid[nx][ny] = ' ';
            }
            grid[px][py] = ' ';
            grid[nx][ny] = 'P';
            px = nx;
            py = ny;
        }
    }

    return 0;
}
