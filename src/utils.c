#include <stdio.h>
#include "../include/student.h"
#include "../include/utils.h"

extern Student *students;
extern int studentCount;

void calculateAverageMarks() {
    if (studentCount == 0) {
        printf("No students found.\n");
        return;
    }

    float total = 0;
    for (int i = 0; i < studentCount; i++) {
        total += students[i].marks;
    }

    printf("Average marks is %.2f.\n", total / studentCount);
};
void sortStudents(int ascending) {
    printf("Utils");
};
void saveToFile() {
    printf("Utils");
};
void loadFromFile() {
    printf("Utils");
};
void freeMemory() {
    printf("Utils");
};