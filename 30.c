#include <stdio.h>

int main() {
    int n, rev = 0, digit;

    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    printf("%d", rev);

    return 0;
}