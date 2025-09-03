// Function in C --3

# include <stdio.h>
# include <math.h>
int main() {
    float num, root;
    printf("Enter a number: ");
    scanf("%f", &num);
    root = sqrt(num);
    printf("The square root of %.2f is %.2f\n", num, root);
    return 0;
}