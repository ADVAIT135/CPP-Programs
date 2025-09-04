// Enumeration (enum) in C -- 3

# include <stdio.h>
# include <conio.h>

typedef enum ABC{
    A = 40, B, X = 50, Y
 }XYZ;

int main() {
    enum ABC C;
    XYZ Z;
    C =  B + 1;
    Z = Y + 1;

    printf("Value of C: %d\n", C);
    printf("Value of Z: %d\n", Z);

    printf("Value of B: %d\n", B);
    printf("Value of Y: %d\n", Y);
    return 0;
}