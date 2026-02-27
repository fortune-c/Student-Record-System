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
    printf("Student");
};
void modifyStudent() {
    printf("Student");
};
void removeStudent() {
    printf("Student");
};
void searchStudent() {
    printf("Student");
};