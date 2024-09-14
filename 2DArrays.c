#include <stdio.h>
#include <stdlib.h>

int main() {

    int nums[3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };

    int c1;
    int c2;

    printf("Enter row: ");
    scanf("%d", &c1);
    printf("Enter column: ");
    scanf("%d", &c2);
    printf("Value: %d\n", nums[c1][c2]);

    //Nested loop
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }   

}