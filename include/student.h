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
void displayStudent();
void modifyStudent();
void removeStudent();
void searchStudent();

// utils.c funcs
void calculateAverageMarks();
void sortStudents(int ascending);
void saveToFile();
void loadFromFile();
void freeMemory();


#endif