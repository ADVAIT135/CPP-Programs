// Write a C program to Calculate the Area of Square.

# include <stdio.h>
int main(){

    int side;
    printf("Enter the side of the square: ");
    scanf("%d", &side);

    int area = side * side;
    printf("Area of the square: %d", area);

    return 0;
}