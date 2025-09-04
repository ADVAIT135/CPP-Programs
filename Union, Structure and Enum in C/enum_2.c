// Enumeration (enum) in C -- 2

# include <stdio.h>

enum months{
    Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

int main() {
    enum months current_month;

    current_month = Jul;

    printf("Value of Jan: %d\n", Jan);
    printf("Value of current_month: %d\n", current_month);

    return 0;
}