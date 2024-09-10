#include <stdio.h>
int main(){
char grade;
printf("Enter your Grade:");
scanf("%c", &grade);
switch (grade){
    
case 'A':
printf("Perfect Okay!");
    break;

case 'B':
printf("You did Good!");
    break;

case 'C':
printf("You did Okay.");
    break;

case 'D':
printf("You need to improve.");
    break;

case 'E':
printf("Bro you serious.");
    break;

case 'F':
printf("You are F***ing Dead!!");
    break;
default:
printf("Please enter a Valid grade.");
    break;
}
    return 0;
}