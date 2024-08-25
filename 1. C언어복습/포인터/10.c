#include<stdio.h>
int main(void)
{
	int a[5] = { 4,5,6,7,8 }, b[5] = { 1,3,5,7,9 }, c[5] = { 0,2,4,6,8 };
	int* p[3] = { a,b,c };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}