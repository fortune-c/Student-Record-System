#include <stdio.h>
#include <stdlib.h>
#include "../include/student.h"

extern Student *students;
extern int studentCount;

void saveToFile() {
    FILE *file = fopen("../data/students.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < studentCount; i++) {
        fprintf(file, "%s, %d, %.2f\n",
                students[i].name,
                students[i].rollNumber,
                students[i].marks);
    }

    fclose(file);
};

void loadFromFile() {
    FILE *file = fopen("../data/students.txt", "r");
    if (file == NULL)
        return;

    Student temp;

    while (fscanf(file, " %99[^,],%d,%f",
              temp.name,
              &temp.rollNumber,
              &temp.marks) == 3) {

        students = realloc(students, (studentCount + 1) * sizeof(Student));
        students[studentCount] = temp;
        studentCount++;
                  }

    fclose(file);
};

void freeMemory() {
    free(students);
};