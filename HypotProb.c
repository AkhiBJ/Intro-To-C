#include <stdio.h>
#include <math.h>
int main(){
double A;
double B;
double C;
printf("\nWhat is Side A: ");
scanf("%lf", &A);
printf("\nWhat is Side B: ");
scanf("%lf", &B);
C=sqrt(A*A+B*B);
printf("Side C: %lf",C);
    return 0;
}