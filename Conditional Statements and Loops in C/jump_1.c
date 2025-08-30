// Jump Statements in C

// Break Statement
#include <stdio.h>

int main() {
    for (int i = 100; i >= 1; i--) {

        printf("\n i: %d", i);
        if (i == 80) {
            break; // Exit the loop when i is 80
        }
    }
    printf("\n Out of for loop");
    return 0;
}