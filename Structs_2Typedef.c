#include <stdio.h>
typedef struct {
char name[25];
char password[12];
int id;
}User;
int main(){
 User user1={"Akhil", "HPWin11", 101010};
 User user2={"Aalok", "AALOK", 556677};

printf("\nUser1 Name: %s", user1.name);
printf("\nPassword: %s", user1.password);
printf("\nID: %d\n", user1.id);

printf("\nUser2 Name: %s", user2.name);
printf("\nPassword: %s", user2.password);
printf("\nID: %d", user2.id);

    return 0;
}