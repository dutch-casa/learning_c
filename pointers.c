#include <stdio.h>
#include <stdlib.h>

int main() {
    
    //The best way to think of pointers is as just another data type.
    //It's just a memory address.

    int age = 30;
    double gpa = 4.0;
    char grade = 'A';
    char name[] = "Dutch";

    //When we create a pointrer variable
    //we are creating a memory address. 

    int * pAge = &age;
    double * pGpa = &gpa;
    char * pGrade = &grade;
    char * pName = &name;

    printf("ages memory address is: %p\n", &age);

    //dereferencing a pointer -- get the value in the pointer.
    printf("age: %d\n", *pAge);
    printf("gpa: %f\n", *pGpa);
    printf("grade: %c\n", *pGrade);
    printf("name: %s\n", pName);
    
    return 0;
}