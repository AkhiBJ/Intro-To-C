#include <stdio.h>
struct Player{
    char name[25];
    int score;   
};
int main(){
struct Player player1={"Akhil", 10};
struct Player player2={"Aalok", 11};

printf("\nPlayer 1: %s", player1.name);
printf("\nScore= %d\n", player1.score);

printf("\nPlayer 2: %s", player2.name);
printf("\nScore= %d", player2.score);

    return 0;
}