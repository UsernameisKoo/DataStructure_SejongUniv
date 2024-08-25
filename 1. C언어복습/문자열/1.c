#include<stdio.h>
int main(void)
{
	char str[10] = "Hello";

	printf("%s\n", str);

	scanf_s("%s", str, 10);
	printf("%s", str);
}