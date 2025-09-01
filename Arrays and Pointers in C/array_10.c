// Arrays in C -- 10

// Passing array through a function

# include <stdio.h>

void printArray(int arr[], int size){
    printf("Array elements are: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[5] = {03, 05, 2001, 07, 01};
    printArray(arr, 5);
    return 0;
}