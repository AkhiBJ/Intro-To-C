#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
srand(time(0));
int numb1=(rand() % 6)+1;
int numb2=(rand() % 6)+1;
int numb3=(rand() % 6)+1;

printf("%d\n", numb1);
printf("%d\n", numb2);
printf("%d\n", numb3);

    return 0;
}