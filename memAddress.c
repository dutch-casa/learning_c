#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 30;
    double gpa = 3.5;
    char name[] = "Dutch";
    char major[] = "Computer Science";


    // These are stored in RAM.

    printf("Age: %p\n", &age);
    printf("GPA: %p\n", &gpa);
    printf("Name: %p\n", &name);
    printf("Major: %p\n", &major);

    //%p lets us print the address of the variable

    return 0;

}