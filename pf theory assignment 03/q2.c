#include <stdio.h>

struct Player {
    int ballScores[12];
    char playerName[100];
    int totalScore;
};

void playGame(struct Player* player) {
    for (int i = 0; i < 12; i++) {
        printf("Enter score for ball %d (0-6): ", i + 1);
        int score;
        scanf("%d", &score);
        if (score >= 0 && score <= 6) {
            player->ballScores[i] = score;
            player->totalScore += score;
        } else {
            player->ballScores[i] = 0;
        }
    }
}

void findWinner(struct Player p1, struct Player p2) {
    if (p1.totalScore > p2.totalScore) {
        printf("%s wins with %d runs!\n", p1.playerName, p1.totalScore);
    } else if (p2.totalScore > p1.totalScore) {
        printf("%s wins with %d runs!\n", p2.playerName, p2.totalScore);
    } else {
        printf("It's a tie!\n");
    }
}

void displayMatchScoreboard(struct Player p1, struct Player p2) {
    printf("%s's Scores: ", p1.playerName);
    for (int i = 0; i < 12; i++) {
        printf("%d ", p1.ballScores[i]);
    }
    printf("\nTotal: %d\n", p1.totalScore);

    printf("%s's Scores: ", p2.playerName);
    for (int i = 0; i < 12; i++) {
        printf("%d ", p2.ballScores[i]);
    }
    printf("\nTotal: %d\n", p2.totalScore);
}

int main() {
    struct Player player1, player2;
    printf("Enter Player 1 name: ");
    scanf("%s", player1.playerName);
    playGame(&player1);

    printf("Enter Player 2 name: ");
    scanf("%s", player2.playerName);
    playGame(&player2);

    displayMatchScoreboard(player1, player2);
    findWinner(player1, player2);

    return 0;
}
