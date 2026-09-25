#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[100], longest[100];
    int i = 0, j = 0, max = 0;

    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if (j > max) {
                max = j;
                strcpy(longest, word);
            }

            j = 0;

            if (str[i] == '\0')
                break;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}