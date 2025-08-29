// Data Types in C
#include <stdio.h>

int main(){
    int a = 2000; // Positive Integer Data Type
    float b = 5.87; // Positive Float Data Type
    char c = 'A'; // Character Data Type
    long d = 67853; // Positive Long Integer Data Type
    long e = -32456; // Negative Long Integer Data Type
    short f = 340; // Positive Short Integer Data Type
    short g = -456; // Negative Short Integer Data Type
    double h = 5.875638576; // Double Float data type

    printf("Size of char : %d Bytes", sizeof(c));
    printf("\nSize of int : %d Bytes", sizeof(a));
    printf("\nSize of float : %d Bytes", sizeof(b));
    printf("\nSize of long : %d Bytes", sizeof(d));
    printf("\nSize of short : %d Bytes", sizeof(f));
    printf("\nSize of double : %d Bytes", sizeof(h));

    return 0;
}