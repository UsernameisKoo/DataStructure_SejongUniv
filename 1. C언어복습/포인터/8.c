#include<stdio.h>
int* smaller(int* a, int* b)
{
	int* p;

	if (*a <= *b)
	{
		p = a;
	}
	else
		p = b;

	return p;
}
int main()
{
	int ar[5] = { 2,1,3,0,4 };
	int* p1;

	p1 = smaller(&ar[1], &ar[3]);

	printf("%d", *p1);
}