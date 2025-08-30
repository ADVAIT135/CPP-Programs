// Jump Statements in C

// Break Statement
#include <stdio.h>

int main() {
    int a = 1;
    while (a <= 10) {
        printf("\n a: %d", a);
        if (a > 5) {
            break; // Exit the loop when a is greater than 5
        }
        a++;
    }
    printf("\n Out of while loop");
    return 0;
}