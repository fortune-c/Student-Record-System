#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/student.h"

Student *students = NULL;
int studentCount = 0;

void addStudent() {
    students = realloc(students, (studentCount + 1) * sizeof(Student));

    printf("Enter student name: ");
    getchar();
    fgets(students[studentCount].name, 50, stdin);
    students[studentCount].name[strcspn(students[studentCount].name, "\n")] = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &students[studentCount].rollNumber);

    printf("Enter Marks: ");
    scanf("%f", &students[studentCount].marks);

    if (students[studentCount].marks >= PASS_MARK) {
        printf("Status: Passed\n");
    } else {
        printf("Status: Failed\n");
    }

    studentCount++;
}

void displayStudents() {
    if (studentCount == 0) {
        printf("No students found\n");
        return;
    }

    for (int i = 0; i < studentCount; i++) {
        printf("\nStudent %d\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);

        if (students[i].marks >= PASS_MARK) {
            printf("Status: Passed\n");
        } else {
            printf("Status: Failed\n");
        }
    }
};
void modifyStudent() {
    int roll, found = 0;

    printf("Enter roll number to modify: ");
    scanf("%d", &roll);

    for (int i = 0; i < studentCount; i++) {
        if (roll == students[i].rollNumber) {
            printf("Enter student name: ");
            getchar();
            fgets(students[i].name, 50, stdin);
            students[i].name[strcspn(students[i].name, "\n")] = 0;

            printf("Enter New Marks: ");
            scanf("%f", &students[i].marks);

            printf("Enter New Marks: ");
            scanf("%f", &students[i].marks);

            printf("Record Updated Successfully.\n");
            found = 1;
            break;
        }
    }
};
void removeStudent() {
    printf("Student");
};
void searchStudent() {
    printf("Student");
};