#include<stdio.h>
int main(void)
{
	char str[10] = "Hi Hello";

	printf("%s\n", str);

	fgets(str, 10, stdin);
	printf("%s", str);
}