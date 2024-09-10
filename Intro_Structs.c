#include <stdio.h>
#include <string.h>
struct Player{
    char name[25];
    int score;   
};
int main(){
struct Player player1;
struct Player player2;

strcpy(player1.name, "Akhil");
strcpy(player2.name, "Aalok");

player1.score=10;
player2.score=5;

printf("\nPlayer 1: %s", player1.name);
printf("\nScore= %d", player1.score);

printf("\nPlayer 2: %s", player2.name);
printf("\nScore= %d", player2.score);

    return 0;
}