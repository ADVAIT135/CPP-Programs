// Write a C program to Calculate the Sum of all numbers.

# include <stdio.h>
int main(){

    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    printf("Sum of all numbers from 1 to %d is: %d", n, sum);
    return 0;
}