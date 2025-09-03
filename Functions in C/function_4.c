// Function in C --4
// Function Overloading in C

# include <stdio.h>

int add(int a, int b){
        return a + b;
    }

//float add(float a, float b){
//    return a + b;
//}


float add_1(float a, float b){
    return a + b;
}

int main(){
    int x = 10, y = 20;
    float f1 = 1.5, f2 = 2.5;

    printf("Integer addition: %d\n", add(x, y));

    //printf("Float addition: %.2f\n", add(f1, f2)); \
    // Function Overloading Not Possible in C --> C is object-oriented

    printf("Float addition: %.2f\n", add_1(f1, f2));


    
    return 0;
}
