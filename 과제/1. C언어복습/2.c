#include<stdio.h>
void ABC(int num[], int k)
{
	int max_index = k;
	int temp;
	for (int i = k; i < 10; i++)
	{
		if (num[k] < num[i])
			max_index = i;
	}
	temp = num[max_index];
	num[max_index] = num[k];
	num[k] = temp;
}
int main(void)
{
	int num[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &num[i]);
	}
	for (int k = 0; k < 9; k++)
	{
		ABC(num, k);
	}
	for (int i = 0; i < 10; i++)
	{
		printf(" %d", num[i]);
	}
}