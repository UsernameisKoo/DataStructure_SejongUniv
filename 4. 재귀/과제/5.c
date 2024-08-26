#define _CRTDBG_MAP_ALLOC
#include<stdio.h>
#include<stdlib.h>
#include<crtdbg.h>
int main(void)
{
	int n, m, x = 0, y = 0, cnt = 1;
	int start[2] = { 0 };
	int** X;

	scanf_s("%d %d", &n, &m);

	X = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++)
	{
		X[i] = (int*)malloc(sizeof(int) * m);
	}

	while (cnt <= n * m)
	{
		X[x][y] = cnt;
		if (x + 1 == n || y - 1 == -1)
		{
			if (start[1] != m - 1)
			{
				start[1]++;
				x = start[0];
				y = start[1];
			}
			else
			{
				start[0]++;
				x = start[0];
				y = start[1];
			}
		}
		else
		{
			x++;
			y--;
		}

		cnt++;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf(" %d", X[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		free(X[i]);
	}
	free(X);
	_CrtDumpMemoryLeaks();
}