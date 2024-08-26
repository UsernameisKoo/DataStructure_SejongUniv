#define _CRTDBG_MAP_ALLOC
#include<stdio.h>
#include<stdlib.h>
#include<crtdbg.h>
int main(void)
{
	int N, n;
	int first, now, past, temp;
	int* x;

	scanf_s("%d", &N);

	x = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &x[i]);
	}

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &now);

		if (i == 0)
		{
			past = x[now];
			first = now;
		}
		else if (i == n - 2)
		{
			temp = x[now];
			x[now] = past;
			x[first] = temp;

		}
		else if (i == n - 1)
		{
			break;
		}
		else
		{
			temp = x[now];
			x[now] = past;
			past = temp;
		}
	}

	for (int i = 0; i < N; i++)
	{
		printf(" %d", x[i]);
	}

	free(x);
	_CrtDumpMemoryLeaks();
}