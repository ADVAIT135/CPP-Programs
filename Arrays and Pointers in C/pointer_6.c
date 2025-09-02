// Arithmetic Operations Pointers in C -- 2

# include <stdio.h>

int main(){


    int a = 10;
    int *ptr1, *ptr2;

    ptr1 = &a;
    ptr2 = &a;

    printf("Before Addition\n");
    printf("Pointer ptr1 before addition : %p\n", ptr1);
    

    ptr1 = ptr1 + 2; // Adding 2 to pointer ptr1

    printf("After Addition\n");
    printf("Pointer ptr1 after addition : %p\n", ptr1);


    printf("Before Addition\n");
    printf("Pointer ptr2 before Subtraction : %p\n", ptr2);

    ptr2 = ptr2 - 2; // Subtracting 2 from pointer ptr2

    printf("After Subtraction\n");
    printf("Pointer ptr2 after subtraction : %p\n", ptr2);

    return 0;
}