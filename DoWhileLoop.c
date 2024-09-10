#include <stdio.h>

int main(){
int numb=0;
float sum=0;
do{
    printf("\nEnter number above 0: ");
    scanf("%d", &numb);
    if (numb>0)
    {
        sum=sum+numb;
    }
}while (numb>0);

    printf("Sum= %f", sum);
    return 0;
}