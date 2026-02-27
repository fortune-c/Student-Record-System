#include <stdio.h>
#include "../include/student.h"
#include "../include/utils.h"
#include "../include/file.h"

void exitProgram() {
    printf("\nProgram completed successfully!\n");
}

int main(){
    char username[50];
    int choice;

    printf("Welcome to the Student Record System\n");
    printf("Enter your name: ");
    fgets(username, sizeof(username), stdin);

    printf("Hello. %s\n", username);

    // loadFromFile();

    do {
        printf("\n--- MENU ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Modify Student\n");
        printf("4. Remove Student\n");
        printf("5. Search Student\n");
        printf("6. Calculate Average\n");
        printf("7. Sort Ascending\n");
        printf("8. Sort Descending\n");
        printf("9. Save to File\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: modifyStudent(); break;
            case 4: removeStudent(); break;
            case 5: searchStudent(); break;
            case 6: calculateAverageMarks();
            case 7: sortStudents(1); break;
            case 8: sortStudents(0); break;
            case 9: saveToFile(); break;
            case 0: exitProgram(); break;
            default: printf("Invalid choice\n"); break;
        }
    } while (choice != 0);

    freeMemory();
    return 0;
}
