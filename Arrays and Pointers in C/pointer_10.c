// Pointer to Function in C

#include <stdio.h>

void salary_hike(int *var, int b) {
    *var = *var + b;
}

int main() {
    int salary = 0;
    int bonus = 0;

    printf("Enter employee current salary: ");
    scanf("%d", &salary);
    printf("Enter employee bonus: ");
    scanf("%d", &bonus);

    salary_hike(&salary, bonus);
    printf("Employee's new salary is: %d\n", salary);
    return 0;
}