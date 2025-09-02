// Arithmetic Operations Pointers in C -- 1

# include <stdio.h>

int main(){

    // Interger variables

    int a = 20;
    int b = 78;

    int *ptr_1 = &a;
    int *ptr_2 = &b;

    printf("Pointer ptr_1 before increment: %d\n", ptr_1);
    printf("Pointer ptr_2 before decrement: %d\n", ptr_2);

    (*ptr_1)++; // Increment pointer
    (ptr_2)--; // Decrement pointer

    printf("Pointer ptr_1 after increment: %d\n", ptr_1);
    printf("Pointer ptr_2 after decrement: %d\n", ptr_2);

    return 0;
}

