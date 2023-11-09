#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void odd_num(int n[]);
void even_num(int n[]);


int main()
{
	int num[5];
	int i;
	printf("Please input five integers: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}
	odd_num(num);
	even_num(num);

	return 0;

}

void odd_num(int n[])
{
	int i;
	printf("Odd numbers: ");
	for (int i = 0; i < 5; i++)
	{
		if (n[i] % 2 == 1)
			printf("%d, ", n[i]);
	}
	printf("\n");
}

void even_num(int n[])
{
	printf("even numbers: ");
	for (int i = 0; i < 5; i++)
	{
		if (n[i] % 2 == 0)
			printf("%d, ", n[i]);

	}
}

