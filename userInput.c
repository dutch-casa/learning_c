#include <stdio.h>
#include <stdlib.h>


int main() {

    //Create an int to store users input
    int age;
    // Prompt user for input
    printf("Enter your age: ");
    //Yank the input from the user
    scanf("%d", &age);
    // Do something with the info
    if (age <= 16) {
        printf("\nYou can't drive\n");
    } else {
        printf("\nYou can drive\n");
    }

    float gpa;
    printf("Now enter your GPA: ");
    scanf("%f", &gpa);

    if(gpa >= 4.0) {
        printf("\nNiiiiiiice  😎😎😎😎\n");
    } else {
        printf("\nLoser\n");
    }



    return 0;
}