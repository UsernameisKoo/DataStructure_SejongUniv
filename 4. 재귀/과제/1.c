#define _CRTDBG_MAP_ALLOC
#include<stdio.h>
#include<stdlib.h>
#include<crtdbg.h>
void swap(int* x, int a, int b)
{
	int temp;
	for (int i = 0; i <= (b - a) / 2; i++)
	{
		temp = x[a + i];
		x[a + i] = x[b - i];
		x[b - i] = temp;
	}
}
int main(void)
{
	int n, num;
	int* x, * cnt;

	// 입력
	scanf_s("%d", &n);

	x = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &x[i]);
	}

	scanf_s("%d", &num);

	cnt = (int*)malloc(sizeof(int) * num * 2);
	for (int i = 0; i < num * 2; i++)
	{
		scanf_s("%d", &cnt[i]);
	}

	for (int i = 0; i < num * 2; i += 2)
	{
		swap(x, cnt[i], cnt[i + 1]);
	}

	for (int i = 0; i < n; i++)
	{
		printf(" %d", x[i]);
	}

	// 메모리 반환
	free(x);
	free(cnt);
	_CrtDumpMemoryLeaks();
	return 0;
}