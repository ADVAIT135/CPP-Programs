// Structures in C -- 3

// Nested Structures       

# include <stdio.h>
 
struct complex{
    float real;
    int imag;
};

struct number{
    struct complex c1;
    int x;
} num1;

int main() {
    num1.c1.real = 5.6;
    num1.c1.imag = 7;
    num1.x = 10;

    printf("Real part: %.2f\n", num1.c1.real);
    printf("Imaginary part: %d\n", num1.c1.imag);
    printf("Integer part: %d\n", num1.x);
    return 0;
}

