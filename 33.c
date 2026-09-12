#include <stdio.h>

int main() {
    int n, temp, digit, count = 0, sum = 0;
    int i, power;

    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= count; i++)
            power = power * digit;

        sum = sum + power;
        temp /= 10;
    }

    if (sum == n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}