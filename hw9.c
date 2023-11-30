#include <stdio.h>

int main() {
    char str[100];

    printf("Input> ");
    fgets(str, sizeof(str), stdin);

    printf("Output> ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i] + 32);
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - 32);
        }
        else {
            printf("%c", str[i]);
        }
    }

    return 0;
}
