// Structures in C -- 5

// Passing Structure to Function

# include <stdio.h>

struct student{
    char name[50];
    int age;
};

//void display(struct student s) {}; // Function to display student details -- Declaration of Function

void display(struct student s) { // Function to display student details -- Definition of Function
    printf("Student Details:\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
}

int main() {
    struct student s1;

    printf("Enter name and age: ");
    scanf("%s %d", s1.name, &s1.age);

    display(s1); // Passing structure to function

    return 0;
}

