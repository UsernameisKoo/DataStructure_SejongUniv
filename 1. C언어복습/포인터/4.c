#include<stdio.h>
int main(void)
{
	char car[5] = { 'H','e','l','l','o' };
	double dar[5] = { 1.1,2.2,3.3,4.4,5.5 };
	for (int i = 0; i < 3; i++)
	{
		printf("%p %d %d\n", car + i, car[i], *(car + i));

	}
	for (int i = 0; i < 3; i++)
	{
		printf("%p %f %f\n", dar + i, dar[i], *(dar + i));
	}
}