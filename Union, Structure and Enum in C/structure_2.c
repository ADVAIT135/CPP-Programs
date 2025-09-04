// Structures in C -- 2

# include <stdio.h>
# include <string.h>

typedef struct Person {
    char name[50];
    int age;
    float salary;
}person;

int main() {
    person p1;

    strcpy(p1.name, "Advait");
    p1.age = 24;
    p1.salary = 25000.50;

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);    
    printf("Salary: %.2f\n", p1.salary);
    return 0;
}