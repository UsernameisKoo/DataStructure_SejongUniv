#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[20] = { 0 }, b[20] = { 0 }, c[60] = { 0 };
	int len1, len2;

	fgets(a, 20, stdin);
	fgets(b, 20, stdin);

	len1 = (int)strlen(a) - 1;
	len2 = (int)strlen(b) - 1;

	strncpy_s(c, sizeof(c), a, len1);
	strncat_s(c, sizeof(c), b, len2);
	strcat_s(c, sizeof(c), a);
	printf("%d %d\n", len1, len2);
	printf("%s", c);
}