#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct player {
    char name[20];
    char team[20];
};

struct bowl {
    char type[10];
    char arm[5];
    struct player ply;
};

struct bat {
    char type[10];
    char handed[8];
    struct bowl ply2;
};

void createPlayer(struct player *newPlayer, char *name, char *team) {
    strcpy(newPlayer->name, name);
    strcpy(newPlayer->team, team);
}

void createBowler(struct bowl *newBowler, char *type, char *arm, struct player ply) {
    strcpy(newBowler->type, type);
    strcpy(newBowler->arm, arm);
    newBowler->ply = ply;
}

void displayPlayer(struct player p) {
    printf("Name: %s, Team: %s\n", p.name, p.team);
}

void displayBowler(struct bowl b) {
    printf("Bowler Type: %s, Arm: %s, Player: %s, Team: %s\n", b.type, b.arm, b.ply.name, b.ply.team);
}

int main() {
    struct player players[5];
    struct bowl bowlers[3];

    createPlayer(&players[0], "John", "TeamA");
    createPlayer(&players[1], "Alex", "TeamB");
    createPlayer(&players[2], "Brian", "TeamA");
    createPlayer(&players[3], "Mike", "TeamC");
    createPlayer(&players[4], "Ethan", "TeamC");

    createBowler(&bowlers[0], "Seamer", "Right", players[0]);
    createBowler(&bowlers[1], "Pacer", "Left", players[1]);
    createBowler(&bowlers[2], "Spinner", "Right", players[2]);

    for (int i = 3; i < 5; i++) {
        struct bowl nonBowler;
        strcpy(nonBowler.type, "N/A");
        strcpy(nonBowler.arm, "N/A");
        nonBowler.ply = players[i];

        printf("\nPlayer %d Details:\n", i+1);
        displayPlayer(players[i]);
        displayBowler(nonBowler);
    }

    printf("\nBowler 1 Details:\n");
    displayBowler(bowlers[0]);

    printf("\nBowler 2 Details:\n");
    displayBowler(bowlers[1]);

    printf("\nBowler 3 Details:\n");
    displayBowler(bowlers[2]);

    return 0;
}
