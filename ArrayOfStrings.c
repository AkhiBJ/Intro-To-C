#include <stdio.h>
#include <string.h>
 int nain(){

char cars[]= {"Mustang","Corvette","Range Rover"};
strcpy(cars[0], "Tesla");

for(int i=0; i < sizeof(cars)/sizeof(cars[0]); i++)
{
  printf("%s\n", cars[i]);
}
    return 0;
 }