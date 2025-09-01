// Arrays in C -- 2


#include <stdio.h>

int main(){
    int arr[5];
    arr[0] = 6;
    arr[2] = 4;
    arr[3/2] = 5;
    arr[3] = arr[0];

    printf("%d, %d, %d, %d, %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    return 0;
}