#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_PLAYER_COUNT 11

void insertPlayers(int jerseyNo, int position);
void displayAll();
void duplicate();
bool searchPlayer(int jerseyNo);

int players[MAX_PLAYER_COUNT];

int main()
{
    int playerCount, jNo, pos;
    printf ("Enter player count: ");
    scanf("%d", &playerCount);

    printf("\nOnly 11 positions will be taken!\n\n");

    int tempPos = 0;

    for (int i = 0; i < playerCount; i++){
        printf("Enter Player %d Jersey Number: ", i + 1);
        scanf("%d", &jNo);

        printf("Enter Player %d Position of the player: ", i + 1);
        scanf("%d", &pos);

        printf("\n");

        if (pos <= MAX_PLAYER_COUNT){
            insertPlayers(jNo, pos - 1);
        }
    }

    displayAll();
    printf("\n\n");

    duplicate();

    if (searchPlayer(15)){
        printf("Player 15 Found!\n");
    }

    else{
        printf("Player 15 Not Found!\n");
    }

    if (searchPlayer(18)){
        printf("Player 18 Found!\n");
    }

    else{
        printf("Player 18 Not Found!\n");
    }
    if (searchPlayer(7)){
        printf("Player 7 Found!\n");
    }

    else{
        printf("Player 7 Not Found!\n");
    }
    if (searchPlayer(16)){
        printf("Player 16 Found!\n");
    }

    else{
        printf("Player 16 Not Found!\n");
    }

    return 0;
}

void insertPlayers(int jerseyNo, int position)
{
    if (position < 12){
        players[position] = jerseyNo;
    }
    return;
}

void displayAll()
{
    printf("***** Display Players *****\n\n");
    for (int i = 0; i < MAX_PLAYER_COUNT; i++)
    {
        printf("Player %d | Jersey Number: %d\n", i + 1, players[i]);
    }

    return;
}

void duplicate()
{
    printf("\n\n***** Duplicate players *****\n\n");

    bool found = false;
    bool duplicate = false;

    int temp[MAX_PLAYER_COUNT];

    for (int i = 0; i < MAX_PLAYER_COUNT; i++){
        temp[i] = players[i];
    }

    for (int i = 0; i < MAX_PLAYER_COUNT; i++){
        for (int j = i + 1; j < MAX_PLAYER_COUNT; j++){
            if (temp [i] != -1 && temp[i] == temp[j]){
                duplicate = found = true;
                printf("Jersey Number: %d | Player Position: %d", temp[j], j + 1);
                temp[j] = -1;
            }
        }
        printf("\n");

        if (duplicate){
            printf("Jersey Number: %d | Player Position: %d", temp[i], i + 1);
            temp[i] = -1;
        }

        duplicate = false;
    }

    if (!(found)){
        printf("No duplicated found!\n");
    }

    return;
}

bool searchPlayer(int jerseyNo){
    for (int i = 0; i < MAX_PLAYER_COUNT; i++){
        if (jerseyNo == players[i]){
            return true;
        }
    }

    return false;
}


