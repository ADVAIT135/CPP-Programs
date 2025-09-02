// Dynamic Memory Allocation in C --2.2
// Malloc, Calloc, Realloc

// CALLOC
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Calloc
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(0);
    }
    else {
        printf("Memory successfully allocated using calloc.\n");
    }

    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    printf("The elements of the Array are : .\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr); // Memory Deallocation
    ptr = NULL;

    return 0;
}
