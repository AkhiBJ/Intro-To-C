#include <stdio.h>
#include <string.h>
int main(){
char name[30];
int age;
printf("What's your name?");
//scanf("%s", &name);
fgets(name, 30, stdin);
name[strlen(name)-1]='\0';
printf("How Old are You?");
scanf("%d", &age);
printf("Hello %s, How Are You?\n", name);
printf("Your Are %d Years Old\n", age);
    return 0;
}