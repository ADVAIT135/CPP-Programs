// Recursion in C -- 3

# include <stdio.h>

int main(){

    int a = 5;
    a++;
    printf("%d\n", a);

    if (a<=6){
        main();
        printf("%d\n", a);
        return 0;
    }

    return 0;

}