// Arrays in C -- 8

//  Insertion of element in an array

# include <stdio.h>

int main(){
    int arr[100] = {1,2,3,4,5};
    int size = 5;
    int index = 2;
    int newElement = 6;

    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
        // arr[i+1] = arr[i]
    }
    arr[index] = newElement;
    size++;

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}