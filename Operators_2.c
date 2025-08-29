// Operators in C -- 2

# include <stdio.h>
int main(){

    int x,y,z;
    x = 5;
    y = x--; // Postfix Decrement (Assign the value of x to y, then decrement x)
    printf("\n X= %d, Y= %d", x, y); // X = 4, Y = 5

    z = --y; // Prefix Decrement (Decrement y, then assign the value to z)
    printf("\n Y= %d, Z= %d", y, z); // Y = 4, Z = 4

    return 0;
}