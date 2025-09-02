// Pointer to Array in C

# include <stdio.h>
# define SIZE 10

int main (){


    int arr[SIZE];
    int *ptr = arr;

    int i;

    printf("Enter the %d array elements: ", SIZE);
    while (ptr < &arr[SIZE]) // Taking input until pointer reaches the end of array
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = arr;
    
    printf("The array elements are: ");
    while (ptr < &arr[SIZE])
    {
        printf("%d ", *ptr);
        ptr++;
    }
    

    return 0;
}