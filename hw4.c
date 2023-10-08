#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, i, j, p = 0;

    printf("Please enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            p++;
    }

    if (p == 2)
        printf("It is a prime number.", num);
    else
        printf("It is not a prime number.");

    return 0;
}