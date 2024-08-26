#define _CRTDBG_MAP_ALLOC
#include<stdio.h>
#include<stdlib.h>
#include<crtdbg.h>
int main(void)
{
	int n;
	int** x;

	scanf_s("%d", &n);

	x = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++)
	{
		x[i] = (int*)malloc(sizeof(int) * n);
		if (i % 2 == 0)
		{
			for (int j = 0; j < n; j++)
			{
				x[i][j] = i * 4 + j + 1;
			}
		}
		else
		{
			for (int j = n - 1; j >= 0; j--)
			{
				x[i][j] = i * 4 + (n - j);
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf(" %d", x[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		free(x[i]);
	}
	free(x);
	_CrtDumpMemoryLeaks();
}