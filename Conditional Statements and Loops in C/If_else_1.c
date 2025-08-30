// If else in C -- 1

# include <stdio.h>
int main(){

    int number;
    
    printf("\n Enter the number :");
    scanf("%d", &number);

    if (number > 10){
        printf("\n %d is greater than 10", number);
        printf("\n End of if block");
    }

    printf("\n End of main method");
    return 0;
}