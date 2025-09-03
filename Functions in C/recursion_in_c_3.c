// Recursion in C -- 4

// Calculate power of a number using recursion

#include <stdio.h>

int power(int base, int exp) {
    if (exp == 0) // Base condition
        return 1;
    return base * power(base, exp - 1); // Recursive call
}

int main() {
    int a,b, result;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);
    result = power(a, b);
    printf("%d to the power of %d is %d\n", a, b, result);
    return 0;
}