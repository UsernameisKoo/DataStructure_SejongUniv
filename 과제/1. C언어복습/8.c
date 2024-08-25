#define _CRTDBG_MAP_ALLOC
#include<stdio.h>
#include<stdlib.h>
#include<crtdbg.h>
struct student {
	char name[7];
	int kor, eng, mat;
	double avg;
};
int main(void)
{
	int n, sum = 0;
	struct student* s;

	scanf_s("%d", &n);

	s = (struct student*)malloc(sizeof(struct student) * n);

	for (int i = 0; i < n; i++)
	{
		scanf_s(" %s %d %d %d", s[i].name, 7, &s[i].kor, &s[i].eng, &s[i].mat);

		sum = s[i].kor + s[i].eng + s[i].mat;
		s[i].avg = (double)sum / 3;

		printf("%s %.1lf", s[i].name, s[i].avg);
		if (s[i].kor >= 90 || s[i].eng >= 90 || s[i].mat >= 90)
		{
			printf(" GREAT");
		}
		if ((s[i].kor < 70 || s[i].eng < 70 || s[i].mat < 70))
		{
			printf(" BAD");
		}
		printf("\n");
	}
	free(s);
	_CrtDumpMemoryLeaks();
}