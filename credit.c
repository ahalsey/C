#include <cs50.h>
#include <stdio.h>

void output(long);
    
int main(void) {
    long l = 0;
    do {
        l = get_long("Credit card number: ");
        if (l < 1000000000000000 || l > 9999999999999999) {
            printf("INVALID\n");
        }
    } while (l < 1000000000000000 || l > 9999999999999999);
    output(l);
}

void output(long num) {
    if (num < 5000000000000000 && num > 3999999999999999) {
        printf("VISA\n");
    }
}

