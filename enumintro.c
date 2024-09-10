#include <stdio.h>
enum Day{Sun=1, Mon=2, Tue=3, Wed=4, Thu=5, Fri=6, Sat=7};
int main(){
enum Day today= Thu;
if (today==Sat || today==Sun)
{
    printf("\nLessgoo Today is a weekend, Let's party!!!");
}
else
{
    printf("\nToday is a working day.");
}


    return 0;
}