#include<stdio.h>
struct student {
	char name[9];
	int score;
};
int main(void)
{
	struct student s[5];
	int sum = 0, avg = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf_s(" %s %d", s[i].name, 9, &s[i].score);
		sum += s[i].score;
	}
	avg = sum / 5;
	for (int i = 0; i < 5; i++)
	{
		if (s[i].score <= avg)
		{
			printf("%s\n", s[i].name);
		}
	}
}