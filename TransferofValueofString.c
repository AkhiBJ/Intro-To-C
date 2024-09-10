#include <stdio.h>
#include <string.h>
int main(){
char x[25]="Soda";
char y[25]="Water";
char temp[25];
strcpy(temp, x);
strcpy(x, y);
strcpy(y, temp);
printf("\n x= %s", x);
printf("\n y= %s", y);
    return 0;
}