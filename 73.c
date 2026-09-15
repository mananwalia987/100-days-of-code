#include <stdio.h>

int main() {
    int r, c, a[100][100], sum[100];

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        sum[i] = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}