#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int sum = 0; sum <= r + c - 2; sum++) {
        if (sum % 2 == 0) {
            for (int i = sum; i >= 0; i--) {
                int j = sum - i;
                if (i < r && j < c)
                    printf("%d ", a[i][j]);
            }
        } else {
            for (int j = sum; j >= 0; j--) {
                int i = sum - j;
                if (i < r && j < c)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}