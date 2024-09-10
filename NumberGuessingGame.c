#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
const int MIN=1;
const int MAX=100;
int guess;
int guesses;
int answer;

srand(time(0));
answer=(rand()%MAX)+MIN;

do
{
    printf("Enter the number: ");
    scanf("%d", &guess);
    if(guess>answer)
{
  printf("Too High\n");
}
else if(guess<answer)
{
 printf("Too Low\n");
}
else
{
    printf("Your Answer is Correct!!\n");
}
guesses++;
} while (guess !=answer);

 printf("\n**********************************");
 printf("\n Answer= %d", answer);
 printf("\n# of Guesses= %d", guesses);
 printf("\n**********************************");

   return 0;
}