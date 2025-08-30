// Loops in C -- 9

// Nested for loop
#include <stdio.h>

int main() {
    for (int i=1; i<=10; i++) {
        for (int j=1; j<=10; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}