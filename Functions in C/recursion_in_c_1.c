// Recursion in C -- 2
// Factorial of a number
#include <stdio.h>

int factorial(int n) {
    if (n == 1) // Base condition
        return 1;
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int x = 5;
    printf("Factorial of %d is %d\n", x, factorial(x));
    return 0;
}