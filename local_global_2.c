//Global Variables in C

#include <stdio.h>

int m = 38, n = 78;

int a = 79, b = 84;

void test(){
    printf("\n All variables are accessed from Test function");
    printf("\n Values of m = %d and n = %d", m, n);
    printf("\n Values of a = %d and b = %d", a, b);
}

int main(){
    printf("\n All variables are accessed from Main function");
    printf("\n Values of m = %d and n = %d", m, n);
    printf("\n Values of a = %d and b = %d", a, b);
    test(); // Calling the function to display global variables
    return 0;
}