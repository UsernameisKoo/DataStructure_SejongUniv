#include<stdio.h>
struct lunchbox {
	int maindish, sidedish[3], beverage;
}box;
int main(void)
{
	struct lunchbox* p = &box;
	int total = 0;

	printf("Maindish : ");
	scanf_s("%d", &p->maindish);
	total += box.maindish;

	for (int i = 0; i < 3; i++)
	{
		printf("Sidedish%d : ", i + 1);
		scanf_s("%d", &p->sidedish[i]);
		total += box.sidedish[i];
	}
	printf("Beverage : ");
	scanf_s("%d", &p->beverage);
	total += box.beverage;

	printf("%d", total);



}