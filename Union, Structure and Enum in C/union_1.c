// Union in C -- 1

#include <stdio.h>

union unionU{
    char name[32];
    float salary;
    int age;
}Ujob;

struct structS{
    char name[32];
    float salary;
    int age;
}Sjob;

int main() {
    printf("Size of union: %zu bytes\n", sizeof(Ujob));
    printf("Size of structure: %zu bytes\n", sizeof(Sjob));
    return 0;
}
