// Arrays in C -- 11

// Passing array through a pointer

# include <stdio.h>

void printArray(int *arr, int size){
    printf("Array elements are: ");
    for(int i = 0; i < size; i++){
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main(){
    int arr[5] = {03, 05, 2001, 07, 01};
    printArray(arr, 5);
    return 0;
}