// Arrays in C -- 5

// Single Dimensional Arrays

# include <stdio.h>

int main(){

    int a[5];
    printf("Enter the Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter the value of %d element: ", i);
        scanf("%d", &a[i]);
    }


    printf("\nThe entered elements are:\n");
    for (int j = 0; j < 5; j++) {
        printf("Element %d: %d\n", j, a[j]);
    }
    

    return 0;

}