#include<stdio.h>
int main(void)
{
	char car[5] = { 'H','e','l','l','o' }, * cp = car;
	double dar[5] = { 1.1,2.2,3.3,4.4,5.5 }, * dp = dar;

	for (int i = 0; i < 3; i++)
	{
		printf("%p %c %c\n", cp + i, cp[i], *(cp + i));

	}
	for (int i = 0; i < 3; i++)
	{
		printf("%p %f %f\n", dp + i, dp[i], *(dp + i));
	}
}