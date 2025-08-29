// Operators in C -- 1

# include <stdio.h>
int main(){

    int x,y,z;
    x = 5;
    y = x++; // Postfix Increment (Assign the value of x to y, then increment x)
    printf("\n X= %d, Y= %d", x, y); // X = 6, Y = 5

    z = ++y; // Prefix Increment (Increment y, then assign the value to z)
    printf("\n Y= %d, Z= %d", y, z); // Y = 6, Z = 6

    return 0;
}