// If else in C -- 2

# include <stdio.h>
int main(){
    int number;

    printf("Even or Odd Checker");
    printf("\n Enter any number : ");
    scanf("%d", &number);

    if ((number % 2) == 0){
        printf("\n %d is an even number", number);
    } else {
        printf("\n %d is an odd number", number);
    }
    
    return 0;
}