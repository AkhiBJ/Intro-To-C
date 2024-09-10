#include <stdio.h>
void Print(int (*A)[2][2])
{
 
}
int main(){
int A[3][2][2]={{{2,3},{4,5}},
                {{6,7},{8,9}},
                {{10,11},{12,13}}};
int B[2][2]={{1,2},{3,4}};      
Print(A);        
    return 0;      
}