#include <stdio.h>

int main() {
    long long n, result = 0, place = 1;
    int digit;

    scanf("%lld", &n);

    while (n != 0) {
        digit = n % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        result = result + digit * place;
        place *= 10;
        n /= 10;
    }

    printf("%lld", result);

    return 0;
}