// Arithmetic Operations Pointers in C -- 3

# include <stdio.h>

int main(){

    int a = 30, b = 10, *p1, *p2, sum;

    p1 = &a;
    p2 = &b;

    sum = *p1 + *p2;

    printf("Addition of two numbers = %d\n", sum);

    int diff = *p1 - *p2;

    printf("Subtraction of two numbers = %d\n", diff);

    return 0;

}