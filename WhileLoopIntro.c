#include <stdio.h>
#include <string.h>
int main(){
char name[25];
printf("\nWhat's your name? ");
fgets(name, 25, stdin);
name[strlen(name)-1]='\0';
while (strlen(name)==0)
{
    printf("\nYou have not entered your name. ");
    printf("\nWhat's your name? ");
    fgets(name, 25, stdin);
    name[strlen(name)-1]='\0';
}

printf("\nHello %s", name);
    return 0;
}