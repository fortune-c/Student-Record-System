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
    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = i + 1; j < studentCount; j++) {
            if ((ascending && students[i].marks > students[j].marks) ||
                (!ascending && students[i].marks < students[j].marks)) {

                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
                }
        }
    }

    printf("Students sorted successfully.\n");
}