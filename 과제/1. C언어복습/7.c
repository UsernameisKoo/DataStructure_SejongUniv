#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n, sum = 0;
	int* num1, * num2;

	scanf_s("%d", &n);

	num1 = (int*)malloc(sizeof(int) * n);
	num2 = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &num1[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &num2[i]);
	}

	for (int i = 0, j = n - 1; i < n; i++, j--)
	{
		sum = num1[i] + num2[j];
		printf(" %d", sum);
	}
}