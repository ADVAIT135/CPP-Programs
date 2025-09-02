// Pointer to Pointer -- Double Pointer in C

# include <stdio.h>
int main(){

    int a = 10;
    int *p;
    int **pp;

    p = &a;
    pp = &p;

    printf("Value of a = %d\n", a);

    printf("Value pointed to by p = %x\n", *p);
    printf("Value pointed to by pp = %x\n", **pp);

    printf("Address pointed to by p = %x\n", p);
    printf("Address pointed to by pp = %x\n", pp);

    return 0;
}