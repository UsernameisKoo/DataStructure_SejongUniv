#define _CRTDBG_MAP_ALLOC
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
#include<crtdbg.h>
double* arr1(double a[], int x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j <= i; j++)
		{
			sum += x[j];
		}
		a[i] = (double)sum / (i + 1);
	}
	return a;
}
double* arr2(double a[], int x[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += x[i];
		a[i] = (double)sum / (i + 1);
	}
	return a;
}
int main(void)
{
	LARGE_INTEGER ticksPerSec;
	LARGE_INTEGER start, end, diff;
	int n;
	int* x;
	double* a;
	scanf_s("%d", &n);

	srand((unsigned)time(NULL));

	x = (int*)malloc(sizeof(int) * n);
	a = (double*)malloc(sizeof(double) * n);

	for (int i = 0; i < n; i++)
	{
		x[i] = rand() % 10000 + 1;
	}

	QueryPerformanceFrequency(&ticksPerSec);
	QueryPerformanceCounter(&start);
	a = arr1(a, x, n);
	QueryPerformanceCounter(&end);

	/*for (int i = 0; i < n; i++)
	{
		printf("%d ", (int)(a[i] + 0.5));
	}
	printf("\n");*/

	diff.QuadPart = end.QuadPart - start.QuadPart;
	printf("time : %.12f sec\n\n", ((double)diff.QuadPart / (double)ticksPerSec.QuadPart));
	free(a);
	free(x);

	_CrtDumpMemoryLeaks();
}