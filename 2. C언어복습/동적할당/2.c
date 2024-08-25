#define _CRTDBG_MAP_ALLOC
#include<stdio.h>
#include<stdlib.h>
#include<crtdbg.h>
int main(void)
{
	int* score;
	int num = 0;

	score = (int*)malloc(sizeof(int) * 5);
	scanf_s("%d %d %d %d %d", &score[0], &score[1], &score[2], &score[3], &score[4]);

	for (int i = 0; i < 5; i++)
	{
		num += score[i];
	}

	num /= 5;

	printf("%d", num);
	free(score);
	_CrtDumpMemoryLeaks();
}