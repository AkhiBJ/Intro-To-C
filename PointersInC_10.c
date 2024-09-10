#include <stdio.h>

int main(){
int A[2][3];
int (*p)[3]=A;
printf("%d\n",A[0]);
printf("%d\n",A[0]+1);
printf("%d\n",A[0]+2);
printf("%d\n",A[1]);
printf("%d\n",A[1]+1);
printf("%d\n",A[1]+2);

    return 0;
}