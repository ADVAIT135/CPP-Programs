// Function in C --1

// Addition of 2 numbers using functions

# include <stdio.h>

int add(int a, int b) {
    return a + b;
}


// Driver Code
int main() {
    int x, y;
    printf("\n Enter the numbers you want to find sum of: ");
    scanf("%d %d", &x, &y);
    int result = add(x, y);
    printf("The sum is: %d\n", result);
    return 0;
}
