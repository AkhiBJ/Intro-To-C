#include <stdio.h>

int main(){
double prices[]={5.00, 10.00, 15.00, 20.00, 25.00, 30.00, 35.00, 40.00, 100.00, 150.00, 6000.00};
printf("\n%d bytes", sizeof(prices));
for(int i=0; i<sizeof(prices)/sizeof(prices[0]); i++)
{
  printf("\n$%.2lf", prices[i]);
}
    return 0;
}