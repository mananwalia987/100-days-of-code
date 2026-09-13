#include <stdio.h>

int main() {
    int n, i;
    int largest, second;

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = second = -2147483648;

    for (i = 0; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    printf("%d", second);

    return 0;
}