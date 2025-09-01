// Arrays in C -- 6

// Create an integer array with size 5 and then calculate the larger element of that
// Array using function

# include <stdio.h>

int findLargest(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int a[5];
    printf("Enter the Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter the value of %d element: ", i);
        scanf("%d", &a[i]);
    }

    int largest = findLargest(a, 5);
    printf("The largest element is: %d\n", largest);

    return 0;
}