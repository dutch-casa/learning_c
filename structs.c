#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
};

//function prototype
void studentToString(struct Student student);

int main() {
    struct Student students[] = {
        {"Dutch Casadaban", "Computer Science", 20, 4.0},
        {"John Doe", "History", 22, 3.5},
        {"Jane Doe", "Mathematics", 28, 3.0}
    };

    for(int i = 0; i < sizeof(students) / sizeof(struct Student); i++) {
        studentToString(students[i]);
    }

    return 0;
}

void studentToString(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Major: %s\n", student.major);
}