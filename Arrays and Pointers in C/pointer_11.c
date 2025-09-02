// Dangling Pointer in C
// Dynamic Memory Allocation in C

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int)); // Memory allocation dynamically
    *ptr = 78;

    int a = 90; // Static Memory Allocation
    printf("Value before freeing: %d\n", *ptr);
    free(ptr); // Memory Deallocation
    // ptr is now a dangling pointer
    printf("Value after freeing: %d\n", *ptr); // Undefined behavior
    return 0;
}
