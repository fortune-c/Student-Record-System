#include <stdio.h>

void welcome(){
    char fullName[60];
    printf("Welcome, please enter your Full Name!\n");
    printf("Enter your Full Name: ");
    scanf("%s",fullName);
    printf("%s\n", fullName);
}

int main()
{
    welcome();
    return 0;
}