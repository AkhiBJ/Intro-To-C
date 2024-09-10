#include <stdio.h>
 struct student {
    char name[25];
    float gpa;
};
int main(){
struct student student1={"Spongebob", 5.0};
struct student student2={"Mario", 7.0};
struct student student3={"Sonic", 6.0};
struct student student4={"Bowser", 4.5};

struct student student[]={student1, student2, student3, student4};

for (int i = 0; i < sizeof(student)/sizeof(student[0]); i++)
{
    printf("%-12s\t", student[i].name);
    printf("%.2f\n", student[i].gpa);
}

    return 0;
}