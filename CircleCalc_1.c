#include <stdio.h>
#include <math.h>
int main(){
const float PIE=3.14159;
double radius;
double circumference;
double area;
printf("\nType The Radius of the Circle");
scanf("%lf", &radius);
circumference=2*PIE*radius;
area=PIE*radius*radius;
printf("The Circumference Of the Circle is %.2lf.",circumference);
printf("\nThe Area Of the Circle is %.2lf.", area);
    return 0;
}