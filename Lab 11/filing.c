#include <stdio.h>
#include <string.h>

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

void createPlayer(struct player *p, const char *n, const char *t) {
    strcpy(p->name, n);
    strcpy(p->team, t);
}

void savePlayers(struct player p[], int size, const char *f) {
    FILE *file = fopen(f, "w");
    if (!file) {
        printf("Error opening file %s\n", f);
        return;
    }
    for (int i = 0; i < size; i++) {
        fprintf(file, "%s %s\n", p[i].name, p[i].team);
    }
    fclose(file);
}

void loadPlayers(struct player p[], int *size, const char *f) {
    FILE *file = fopen(f, "r");
    if (!file) {
        printf("Error opening file %s\n", f);
        *size = 0;
        return;
    }
    *size = 0;
    while (fscanf(file, "%s %s", p[*size].name, p[*size].team) == 2) {
        (*size)++;
    }
    fclose(file);
}

void createBowler(struct bowl *b, const char *t, const char *a, const char *n, const char *team) {
    strcpy(b->type, t);
    strcpy(b->arm, a);
    createPlayer(&b->ply, n, team);
}

void saveBowlers(struct bowl b[], int size, const char *f) {
    FILE *file = fopen(f, "w");
    if (!file) {
        printf("Error opening file %s\n", f);
        return;
    }
    for (int i = 0; i < size; i++) {
        fprintf(file, "%s %s %s %s\n", b[i].type, b[i].arm, b[i].ply.name, b[i].ply.team);
    }
    fclose(file);
}

void loadBowlers(struct bowl b[], int *size, const char *f) {
    FILE *file = fopen(f, "r");
    if (!file) {
        printf("Error opening file %s\n", f);
        *size = 0;
        return;
    }
    *size = 0;
    while (fscanf(file, "%s %s %s %s", b[*size].type, b[*size].arm, b[*size].ply.name, b[*size].ply.team) == 4) {
        (*size)++;
    }
    fclose(file);
}

void createBatsman(struct bat *b, const char *t, const char *h, const char *bt, const char *a, const char *n, const char *team) {
    strcpy(b->type, t);
    strcpy(b->handed, h);
    createBowler(&b->ply2, bt, a, n, team);
}

void saveBatsmen(struct bat b[], int size, const char *f) {
    FILE *file = fopen(f, "w");
    if (!file) {
        printf("Error opening file %s\n", f);
        return;
    }
    for (int i = 0; i < size; i++) {
        fprintf(file, "%s %s %s %s %s %s\n", b[i].type, b[i].handed, b[i].ply2.type, b[i].ply2.arm, b[i].ply2.ply.name, b[i].ply2.ply.team);
    }
    fclose(file);
}

void loadBatsmen(struct bat b[], int *size, const char *f) {
    FILE *file = fopen(f, "r");
    if (!file) {
        printf("Error opening file %s\n", f);
        *size = 0;
        return;
    }
    *size = 0;
    while (fscanf(file, "%s %s %s %s %s %s", b[*size].type, b[*size].handed, b[*size].ply2.type, b[*size].ply2.arm, b[*size].ply2.ply.name, b[*size].ply2.ply.team) == 6) {
        (*size)++;
    }
    fclose(file);
}

void displayPlayers(struct player p[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Team: %s\n", p[i].name, p[i].team);
    }
}

void displayBowlers(struct bowl b[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Type: %s, Arm: %s, Name: %s, Team: %s\n", b[i].type, b[i].arm, b[i].ply.name, b[i].ply.team);
    }
}

void displayBatsmen(struct bat b[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Type: %s, Handed: %s, Bowler Type: %s, Arm: %s, Name: %s, Team: %s\n",
               b[i].type, b[i].handed, b[i].ply2.type, b[i].ply2.arm, b[i].ply2.ply.name, b[i].ply2.ply.team);
    }
}

int main() {
    struct player players[5];
    struct bowl bowlers[3];
    struct bat batsmen[2];
    int pc = 0, bc = 0, btc = 0;

    createPlayer(&players[0], "John", "TeamA");
    createPlayer(&players[1], "Mike", "TeamB");
    savePlayers(players, 2, "players.txt");

    createBowler(&bowlers[0], "seemer", "left", "Steve", "TeamA");
    createBowler(&bowlers[1], "spinner", "right", "Alex", "TeamB");
    saveBowlers(bowlers, 2, "bowlers.txt");

    createBatsman(&batsmen[0], "top order", "lefty", "pacer", "right", "David", "TeamA");
    saveBatsmen(batsmen, 1, "batsmen.txt");

    loadPlayers(players, &pc, "players.txt");
    loadBowlers(bowlers, &bc, "bowlers.txt");
    loadBatsmen(batsmen, &btc, "batsmen.txt");

    printf("Players:\n");
    displayPlayers(players, pc);

    printf("\nBowlers:\n");
    displayBowlers(bowlers, bc);

    printf("\nBatsmen:\n");
    displayBatsmen(batsmen, btc);

    return 0;
}
