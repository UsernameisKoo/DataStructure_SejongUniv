#include<stdio.h>
int main()
{
	int a = 1, b = 2, c = 3;
	int* pi[3] = { &a,&b,&c };
	int** ppi;

	ppi = pi;
	printf("%d %d %d", *ppi[0], *ppi[1], *ppi[2]);
}