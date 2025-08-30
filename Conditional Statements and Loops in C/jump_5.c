// Jump Statements in C -- 5

// Goto Statement
#include <stdio.h>

int main() {
    int i = 10;

    LOOP:
    do
    {
        if (i == 15){
            printf("Skipping 15\n");
            i++;
            goto LOOP; // Jump to the beginning of the loop
        }
        printf("Value of i: %d\n", i);
        i++;
    } while (i < 20);

    return 0;
}
 