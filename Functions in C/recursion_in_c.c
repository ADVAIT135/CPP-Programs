// Recursion in C -- 1

#include <stdio.h>

void func_1(int n){
    printf("%d ", n);
    if(n == -10) // Base condition
        return;
    func_1(n-1); // Recursive call
}

int main() {
    int x = 10;
    func_1(x);
    return 0;
}