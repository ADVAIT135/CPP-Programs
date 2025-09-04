// Structures in C -- 6

# include <stdio.h>

struct student{
    char name[50];
    int age;
};

struct student getInformation(){
    struct student s1;
    printf("Enter name and age: ");
    scanf("%s %d", s1.name, &s1.age);
    return s1;
}

int main(){
    struct student s2;
    s2 = getInformation(); // Function returning structure

    printf("Student Details:\n");
    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);

    return 0;
}