// Structures in C -- 7

// Structure by Reference

# include <stdio.h>

typedef struct Complex{
    float real;
    float imag;
} Complex;

void addNumbers(Complex *c1, Complex *c2, Complex *result) {
    result->real = c1->real + c2->real;
    result->imag = c1->imag + c2->imag;
}

int main() {
    Complex num1, num2, sum;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    addNumbers(&num1, &num2, &sum);

    printf("Sum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}