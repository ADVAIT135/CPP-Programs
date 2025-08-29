//Local Variables in C

#include <stdio.h>

void test(){
    int a = 50; //Local variable
    int b = 67; //Local variable
    printf("\n Values of a = %d and b = %d", a, b);
}

int main() {
    int x = 89; //Local Variable
    int y = 56; //Local Variable
    printf("\n Values of x = %d and y = %d", x, y);
    test(); // Calling the function to display local variables a and b
    return 0;
}