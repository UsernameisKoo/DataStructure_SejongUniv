#include<stdio.h>
int main(void)
{
	int num1, num2, * p = &num1;

	*p = 3000;

	num2 = *p;

	p = &num2;

	*p = *p - 1000;

	num1 = (*p) * 2;

	printf("%d %d %p\n", num1, num2, p);
	printf("%p %p %p\n", &num1, &num2, &p);
}