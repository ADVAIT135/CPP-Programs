// Dynamic Memory Allocation in C --2.3
// Malloc, Calloc, Realloc

// REALLOC
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<malloc.h>

int main() {
    int *arr;
    int s1, s2;

    printf("Enter the size of array s1 : ");
    scanf("%d", &s1);

    arr = (int *)calloc(s1, sizeof(int));

    printf("\n Enter %d elements of array : ", s1);
    for(int i = 0; i < s1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the size of array s2 : ");
    scanf("%d", &s2);

    arr = (int *)realloc(arr, (s1+s2) * sizeof(int));

    printf("\n Enter %d elements of array : ", s2);
    for(int i = s1; i < s1+s2; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are : ");
    for(int i = 0; i < s1+s2; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr); // Memory Deallocation
    arr = NULL;

    return 0;
}
