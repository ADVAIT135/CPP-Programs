// Enumeration (enum) in C -- 1

# include <stdio.h>

enum ABC{
    A, B, C
};

int main() {
    enum ABC var;

    var = A+B+C;

    printf("Value of A: %d\n", A);
    printf("Value of B: %d\n", B);
    printf("Value of C: %d\n", C);
    printf("Value of var: %d\n", var);

    return 0;
}