#include <stdio.h>
void sort(char array[], int size){
for(int i=0; i< size-1; i++)
{
for ( int j = 0; j < size-1; j++)
{
    if (array[j]>array[j+1])
    {
        int temp=array[j];
        array[j]=array[j+1];
        array[j+1]= temp;
    }
    
}

}

}
void printArray(char array[], int size)
{
for ( int i = 0; i < size; i++)
{
    printf("%c ", array[i]);
}

}

int main(){
//int array[]={9, 1, 3, 4, 2, 5, 7, 8, 6};
char array[]={'D', 'A', 'B', 'E', 'F', 'C'};
int size=sizeof(array)/sizeof(array[0]);
sort(array, size);
printArray(array, size);

    return 0;
}