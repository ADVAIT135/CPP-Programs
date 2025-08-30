// Jump Statements in C

// Continue Statement - 1
#include <stdio.h>

int main() {
    
    int a = 10;

    while (a < 25)
    {
        a += 2;

        if (a>15 && a <20)
        continue; // Skip the rest of the loop when a is between 15 and 20

        printf("\n a: %d", a);
    }
    
    

    return 0;
}