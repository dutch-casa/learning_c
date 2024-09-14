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
        printf("You can't drive\n\n");
    } else {
        printf("You can drive\n\n");
    }

    float gpa;
    printf("Now enter your GPA: ");
    scanf("%f", &gpa);

    if(gpa >= 4.0) {
        printf("Niiiiiiice  😎😎😎😎\n\n");
    } else {
        printf("Loser\n\n");
    }

    //use getchar() to clear the input buffer.
    getchar();


    //fgets gets a whole line basically
    char name[20];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);


    printf("Nice name, %s\n\n", name);

    return 0;
}