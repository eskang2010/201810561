#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int totwo(int n);

int totwo(int n)
{
	if (n == 0 || n == 1)
	{
		printf("%d", n);
	}
	else
	{
		totwo(n / 2);
		printf("%d", n % 2);
	}
	return 0;
}

int main(void)
{
	int number;
	printf("Please enter a number: ");
	scanf("%d", &number);
	totwo(number);
	printf("\n");

	return 0;
}

