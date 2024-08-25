#define _CRTDBG_MAP_ALLOC
#include<stdio.h>
#include<stdlib.h>
#include<crtdbg.h>
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main(void)
{
	int n, a, b;
	int* num;

	scanf_s("%d", &n);
	num = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &num[i]);
	}
	scanf_s("%d %d", &a, &b);

	swap(&num[a], &num[b]);

	for (int i = 0; i < n; i++)
	{
		printf(" %d", num[i]);
	}
	free(num);

	_CrtDumpMemoryLeaks();
}