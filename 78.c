#include <stdio.h>

int main() {
    int r, c, a[100][100];
    int sum = 0;

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}