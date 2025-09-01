// Arrays in C -- 1

# include <stdio.h>

int main() {
    //int x = 7;

    int marks[5]; // array named marks has size of 5
    float average;

    printf("Enter marks for 5 subjects: \n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Calculate average
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }
    average = sum / 5.0;

    printf("Average marks: %.2f\n", average);

    return 0;
}
