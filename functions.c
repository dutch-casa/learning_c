#include <stdio.h>
#include <stdlib.h>

/*In order to keep main at the top, we have to do function
* prototypes, which you just say the function type
* and name before the main function.
*/

//function prototypes
void sayHelloThere(char name[]);

int main() {
    char inputName[20];
    printf("What is your name: ");
    fgets(inputName, sizeof(inputName), stdin);
    sayHelloThere(inputName);
    return 0;
}

//To use a function you have to call it in main
void sayHelloThere(char name[]) {
    printf("Hello there, %s", name);
}