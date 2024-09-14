#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello, World!\n");

    printf("       /\\\n");
    printf("      /  \\\n");
    printf("     /    \\\n");
    printf("    /      \\\n");
    printf("   /        \\\n");
    printf("  /          \\\n");
    printf(" /____________\\\n");


    // Let's experiment with some variables.

    // C doesn't have strings, so we wil use a char array
    char name[] = "Dutch";
    int age = 20;

    printf("My name is %s and I am %d years old.\n", name, age);

    char name2[] = "Dave Grohl";
    age = 47;

    printf("%s is %d years old\n", name2, age);

    return 0;
}