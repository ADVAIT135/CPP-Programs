// Pointers in C -- 3

# include <stdio.h>

int main(){
    int a;
    int *ptr = &a;

    a = 67;
    printf("\n %p %p", &a, ptr);
    printf("\n %d %d", a, *ptr);

    *ptr = 47;
    printf("\n %x %x", &a, ptr);
    printf("\n %d %d", a, *ptr);


    return 0;
}