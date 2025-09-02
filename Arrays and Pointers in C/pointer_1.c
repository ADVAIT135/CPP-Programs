// Pointers in C -- 1

# include <stdio.h>

int main(){

    int a;
    printf("Enter any number: ");
    scanf("%d", &a);

    printf("You entered: %d\n", a);

    printf("Address of variable a: %d\n", &a);
    return 0;
}