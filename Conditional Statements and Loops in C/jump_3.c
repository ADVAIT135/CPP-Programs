// Jump Statements in C

// Continue Statement
#include <stdio.h>

int main() {
    
    int counter = 10;
    while (counter > 0)
    {
        if (counter == 7)
        {
            counter--;
            continue; // Skip the rest of the loop when counter is 7
        }
        printf("\n counter: %d ", counter);
        counter--;
    }
    

    return 0;
}