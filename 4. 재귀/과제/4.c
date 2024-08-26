#define _CRTDBG_MAP_ALLOC
#include<stdio.h>
#include<stdlib.h>
#include<crtdbg.h>
int main(void)
{
	int n, m, ** X;
	int x = 0, y = 0, cnt = 1;
	int dir = 0;

	scanf_s("%d %d", &n, &m);

	X = (int**)malloc(sizeof(int*) * n);

	for (int i = 0; i < n; i++)
	{
		X[i] = (int*)malloc(sizeof(int) * m);
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			X[i][j] = 0;
		}
	}

	while (cnt <= n * m)
	{
		if (dir == 0)
		{
			X[x][y] = cnt;
			if (y + 1 == m || X[x][y + 1] != 0)
			{
				dir++;
				x++;
			}
			else
			{
				y++;
			}
			cnt++;
		}
		else if (dir == 1)
		{
			X[x][y] = cnt;
			if (x + 1 == n || X[x + 1][y] != 0)
			{
				dir++;
				y--;
			}
			else
			{
				x++;
			}
			cnt++;
		}
		else if (dir == 2)
		{
			X[x][y] = cnt;
			if (y - 1 == -1 || X[x][y - 1] != 0)
			{
				dir++;
				x--;
			}
			else
			{
				y--;
			}
			cnt++;
		}
		else
		{
			X[x][y] = cnt;
			if (x - 1 == -1 || X[x - 1][y] != 0)
			{
				dir = 0;
				y++;
			}
			else
			{
				x--;
			}
			cnt++;
		}
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
