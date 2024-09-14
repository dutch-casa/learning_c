#include <stdio.h>
#include <stdlib.h>

/*In order to keep main at the top, we have to do function
* prototypes, which you just say the function type
* and name before the main function.
*/

//function prototypes
void sayHelloThere();

int main() {
    sayHelloThere();
    return 0;
}

//To use a function you have to call it in main
void sayHelloThere() {
    printf("Hello there!\n");
}