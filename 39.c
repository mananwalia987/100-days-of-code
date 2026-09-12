#include <stdio.h>

int main() {
    int n, digit, product = 1, found = 0;

    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;

        if (digit % 2 != 0) {
            product = product * digit;
            found = 1;
        }

        n = n / 10;
    }

    if (found)
        printf("%d", product);
    else
        printf("No odd digits");

    return 0;
}