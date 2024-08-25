#include<stdio.h>
int sum(int);
int main(void)
{
	int x, result = 0;
	scanf_s("%d", &x);
	for (int i = 1; i <= x; i++)
	{
		result += sum(i);
	}
	printf("%d", result);
}
int sum(int a)
{
	int sum = 0;
	for (int i = 1; i <= a; i++)
	{
		sum += i;
	}
	return sum;
}