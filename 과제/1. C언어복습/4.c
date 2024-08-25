#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[102] = { 0 };
	int len;

	fgets(str, 102, stdin);
	len = (int)strlen(str) - 1;
	str[len] = '\0';

	for (int i = 0; i < len; i++)
	{
		printf("%s", &str[i]);
		for (int j = 0; j < i; j++)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}
}