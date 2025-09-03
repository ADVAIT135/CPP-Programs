// Storage Class in C

#include <stdio.h>

int c = 15; // Global variable definition

void function() {
    auto int a = 5; // Automatic variable (auto is optional)
    static int b = 10; // Static variable
    extern int c; // External variable (refers to global c)
    register int d = 20; // Register variable
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    a++;
    b++;
}

int main() {
    function();
    function();
    printf("c = %d\n", c);
    return 0;
}