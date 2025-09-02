// Pointers in C -- 2

# include <stdio.h>
int main(){
    int a;
    int *ptr = &a; 
    a = 56;

    printf("\n %p %p", &a, ptr);
    printf("\n %d %d", a, *ptr);

    *ptr = 57;

    printf("\n %u %u", &a, ptr);
    printf("\n %d %d", a, *ptr);
    return 0;
}