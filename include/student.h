#ifndef STUDENT_H
#define STUDENT_H

#define PASS_MARK 40
typedef struct {
    char name[100];
    int rollNumber;
    float marks;
} Student;

// student.c funcs
void addStudent();
void displayStudents();
void modifyStudent();
void removeStudent();
void searchStudent();

#endif