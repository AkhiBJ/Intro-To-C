#include <stdio.h>

int main(){
int A[3][2][2]={{{2,3},{4,5}},
                {{6,7},{8,9}},
                {{10,11},{12,13}}};
printf("%d\n",A);                
printf("%d\n",A[0][0]+1);
printf("%d\n",A[0][1]);  
printf("%d\n",A[0][1]+1);  
printf("%d\n",A[1][0]);  
printf("%d\n",A[1][0]+1); 
printf("%d\n",A[1][1]);   
printf("%d\n",A[1][1]+1); 
printf("%d\n",A[2][0]); 
printf("%d\n",A[2][0]+1);
printf("%d\n",A[2][1]);
printf("%d\n",A[2][1]+1);
printf("\n"); 
printf("Above mentioned values are the variable's Addresses >>>>>>>>>>>>>>>>\n");
printf("\n");         
printf("%d\n",A[0][0][0]); 
printf("%d\n",A[0][0][1]); 
printf("%d\n",A[0][1][0]); 
printf("%d\n",A[0][1][1]);
printf("%d\n",A[1][0][0]);
printf("%d\n",A[1][0][1]);
printf("%d\n",A[1][1][0]);
printf("%d\n",A[1][1][1]);
printf("%d\n",A[2][0][0]);
printf("%d\n",A[2][0][1]);
printf("%d\n",A[2][1][0]);
printf("%d\n",A[2][1][1]);
    return 0;
}