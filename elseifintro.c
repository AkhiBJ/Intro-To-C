#include <stdio.h>
int main(){
int age;
printf("\nWhat's your age");
scanf("%d", &age);

if (age>=18){
printf("\nYou are eligible for the service");
}

else if(age<18){
printf("\nOops you are not eligible for the service");
}

else if(age<0){
printf("\nYou Are not even born dude, Go Get Some Life");
}

else if(age==0){
    printf("\nYou have come to this World Just Now, Pls Try back Later After 18 Years Good Luck Baby!!");
}

    return 0;
}