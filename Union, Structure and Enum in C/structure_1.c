// Structures in C -- 1

# include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    struct Rectangle rect = {30, 40};
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &rect.length, &rect.breadth);

    printf("Area of rectangle: %d\n", rect.length * rect.breadth);
    return 0;
}