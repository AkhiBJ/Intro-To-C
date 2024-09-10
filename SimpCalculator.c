#include <stdio.h>
int main(){
char operator;
double num1;
double num2;
double result;
printf("Which operator do you want to use?(+, -, *,/)");
scanf("%c", &operator);

printf("\nEnter Number 1: ");
scanf("%lf", &num1);

printf("\nEnter Number 2: ");
scanf("%lf", &num2);

switch (operator)
{
case '+':
    result=num1+num2;
    printf("\nAnswer= %lf", result);
    break;

case '-':
    result=num1-num2;
    printf("\nAnswer= %lf", result);
    break;

case '*':
    result=num1*num2;
    printf("\nAnswer= %lf", result);
    break;

case '/':
    result=num1/num2;
    printf("\nAnswer= %lf", result);
    break;

default:
    printf("\n %c is not a Valid Operator", operator);
    printf("\n Please enter a valid operator (+, -, *, /)");
    break;
}
    return 0;
}