#include<stdio.h>
int main(void)
{
	int* p1 = NULL;
	char* p2 = NULL;

	printf("%p %p\n", p1, p2);

	p1++, p2++;

	printf("%p %p\n", p1, p2);

	p1 += 2;
	p2 += 2;

	printf("%p %p\n", p1, p2);
}