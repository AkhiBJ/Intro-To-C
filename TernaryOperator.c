#include <stdio.h>

int findMax(int x, int y )
{
if (x>y)
{
    return x;
}

else
{
    return y;
}

}
int main(){
int max=findMax(3, 4);
printf("%d", max);
    return 0;
}