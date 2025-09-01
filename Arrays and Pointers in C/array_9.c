// Arrays in C -- 9

//  Deletion of element in an array

# include <stdio.h>

int main(){
    int arr[100] = {1,2,3,4,5};
    int size = 5;
    int index = 2;
  

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}