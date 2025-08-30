// Loops in C -- 6

// Nested Do -- while Loop


# include <stdio.h>
int main(){

   
    do
    {
        printf("\n I am from outer do-while loop");
        do
        {
            printf("\n I am from inner do-while loop");
        } while (1 > 10);

    } while (1 > 7);

    return 0;
}