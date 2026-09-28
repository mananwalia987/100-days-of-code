#include <stdio.h>

int main() {
    int dd, mm, yyyy;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    printf("%02d-%s-%d", dd, months[mm - 1], yyyy);

    return 0;
}