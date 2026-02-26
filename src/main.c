#include <stdio.h>

void welcome(){
    char firstName[60];
    char lastName[60];
    printf("-------- Welcome, please enter your Full Name! ------- \n");
    printf("Enter your First Name: ");
    scanf("%s", firstName);
    printf("Enter your Last Name: ");
    scanf("%s", lastName);
    printf("%s %s\n", firstName, lastName);
}

int main()
{
    welcome();
    return 0;
}