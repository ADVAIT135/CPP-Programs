// Pointers in C -- 4

# include <stdio.h>

int main(){
    int a, b;
    int *ptr = &a;

    a = 10;
    b = 20;

   
    printf("\n %d %d %d", a, b, *ptr);

    *ptr = 30;
    ptr = &b;
    *ptr = 40;

    printf("\n %d %d %d", a, b, *ptr);

    return 0;
}