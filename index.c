#include <stdio.h>
#include <stdlib.h>

char one = '1', two = '2', three = '3', four = '4', five = '5', six = '6', seven = '7', eight = '8', nine = '9';

void tabel() {
    printf("     |      |     \n");
    printf("  %c  |  %c   |  %c   \n", one, two, three);
    printf("_____|______|_____\n");
    printf("     |      |     \n");
    printf("  %c  |  %c   |  %c   \n", four, five, six);
    printf("_____|______|_____\n");
    printf("     |      |     \n");
    printf("  %c  |  %c   |  %c   \n", seven, eight, nine);
    printf("     |      |     \n");
}

void Multiplayer() {
    int input, nr = 0;
    while (1) {
        nr++;
        if (nr % 2 == 1) {
            printf("Player 1(X) is choosing\n");
        } else {
            printf("Player 2(O) is choosing\n");
        }
        scanf("%d", &input);
        switch (input) {
            case 1:
                if (one != 'X' && one != 'O') {
                    if (nr % 2 == 1) {
                        one = 'X';
                        system("clear");
                        tabel();
                    } else {
                        one = 'O';
                        system("clear");
                        tabel();
                    }
                } else {
                    printf("This position (1) is already taken\n");
                    nr -= 1;
                }
                break;
            case 2:
                if (two != 'X' && two != 'O') {
                    if (nr % 2 == 1) {
                        two = 'X';
                        system("clear");
                        tabel();
                    } else {
                        two = 'O';
                        system("clear");
                        tabel();
                    }
                } else {
                    printf("This position (2) is already taken\n");
                    nr -= 1;
                }
                break;
            case 3:
                if (three != 'X' && three != 'O') {
                    if (nr % 2 == 1) {
                        three = 'X';
                        system("clear");
                        tabel();
                    } else {
                        three = 'O';
                        system("clear");
                        tabel();
                    }
                } else {
                    printf("This position (3) is already taken\n");
                    nr -= 1;
                }
                break;
            case 4:
                if (four != 'X' && four != 'O') {
                    if (nr % 2 == 1) {
                        four = 'X';
                        system("clear");
                        tabel();
                    } else {
                        four = 'O';
                        system("clear");
                        tabel();
                    }
                } else {
                    printf("This position (4) is already taken\n");
                    nr -= 1;
                }
                break;
            case 5:
                if (five != 'X' && five != 'O') {
                    if (nr % 2 == 1) {
                        five = 'X';
                        system("clear");
                        tabel();
                    } else {
                        five = 'O';
                        system("clear");
                        tabel();
                    }
                } else {
                    printf("This position (5) is already taken\n");
                    nr -= 1;
                }
                break;
            case 6:
                if (six != 'X' && six != 'O') {
                    if (nr % 2 == 1) {
                        six = 'X';
                        system("clear");
                        tabel();
                    } else {
                        six = 'O';
                        system("clear");
                        tabel();
                    }
                } else {
                    printf("This position (6) is already taken\n");
                    nr -= 1;
                }
                break;
            case 7:
                if (seven != 'X' && seven != 'O') {
                    if (nr % 2 == 1) {
                        seven = 'X';
                        system("clear");
                        tabel();
                    } else {
                        seven = 'O';
                        system("clear");
                        tabel();
                    }
                } else {
                    printf("This position (7) is already taken\n");
                    nr -= 1;
                }
                break;
            case 8:
                if (eight != 'X' && eight != 'O') {
                    if (nr % 2 == 1) {
                        eight = 'X';
                        system("clear");
                        tabel();
                    } else {
                        eight = 'O';
                        system("clear");
                        tabel();
                    }
                } else {
                    printf("This position (8) is already taken\n");
                    nr -= 1;
                }
                break;
            case 9:
                if (nine != 'X' && nine != 'O') {
                    if (nr % 2 == 1) {
                        nine = 'X';
                        system("clear");
                        tabel();
                    } else {
                        nine = 'O';
                        system("clear");
                        tabel();
                    }
                } else {
                    printf("This position (9) is already taken\n");
                    nr -= 1;
                }
                break;
            default:
                printf("Out of range\n");
                scanf("%*s");
                nr -= 1;
                break;
        }
        if (one == 'X' && two == 'X' && three == 'X') {
            printf("Player 1(X) Won!\n");
            break;
        } else if (one == 'O' && two == 'O' && three == 'O') {
            printf("Player 2(O) Won!\n");
            break;
        } else if (four == 'X' && five == 'X' && six == 'X') {
            printf("Player 1(X) Won!\n");
            break;
        } else if (four == 'O' && five == 'O' && six == 'O') {
            printf("Player 2(O) Won!\n");
            break;
        } else if (seven == 'X' && eight == 'X' && nine == 'X') {
            printf("Player 1(X) Won!\n");
            break;
        } else if (seven == 'O' && eight == 'O' && nine == 'O') {
            printf("Player 2(O) Won!\n");
            break;
        } else if (one == 'X' && four == 'X' && seven == 'X') {
            printf("Player 1(X) Won!\n");
            break;
        } else if (one == 'O' && four == 'O' && seven == 'O') {
            printf("Player 2(O) Won!\n");
            break;
        } else if (two == 'X' && five == 'X' && eight == 'X') {
            printf("Player 1(X) Won!\n");
            break;
        } else if (two == 'O' && five == 'O' && eight == 'O') {
            printf("Player 2(O) Won!\n");
            break;
        } else if (three == 'X' && six == 'X' && nine == 'X') {
            printf("Player 1(X) Won!\n");
            break;
        } else if (three == 'O' && six == 'O' && nine == 'O') {
            printf("Player 2(O) Won!\n");
            break;
        } else if (one == 'X' && five == 'X' && nine == 'X') {
            printf("Player 1(X) Won!\n");
            break;
        } else if (one == 'O' && five == 'O' && nine == 'O') {
            printf("Player 2(O) Won!\n");
            break;
        } else if (three == 'X' && five == 'X' && seven == 'X') {
            printf("Player 1(X) Won!\n");
            break;
        } else if (three == 'O' && five == 'O' && seven == 'O') {
            printf("Player 2(O) Won!\n");
            break;
        } else {
            if (nr == 9) {
                printf("Game ended with a Tie!\n");
                break;
            }
        }
    }
}

int main() {
    tabel();
    printf("--------------------------------\n");
    printf("Player 1 is X and player 2 is O\n");
    printf("--------------------------------\n");
    Multiplayer();
    return 0;
}