#include<stdio.h>
int main(void)
{
	int x[4];
	for (int i = 0; i < 4; i++)
	{
		printf("x[%d]:  %p\n", i, &x[i]);
	}
}