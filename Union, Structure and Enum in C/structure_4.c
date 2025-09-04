// Structures in C -- 4

// Pointer to Structure 

# include <stdio.h>

struct person{
    int age;
    float weight;
} ;

int main() {
    struct  person *personPtr, person1;
    personPtr = &person1;

    printf("Enter age and weight: ");
    scanf("%d %f", &personPtr->age, &personPtr->weight);

    printf("Age: %d\n", personPtr->age);
    printf("Weight: %.2f\n", personPtr->weight);

    return 0;
}

