#include<stdio.h>
struct lunchbox {
	int maindish, sidedish[3], beverage;
};
int main(void)
{
	struct lunchbox a, b;
	printf("Maindish : ");
	scanf_s("%d", &a.maindish);

	for (int i = 0; i < 3; i++)
	{
		printf("Sidedish%d : ", i + 1);
		scanf_s("%d", &a.sidedish[i]);
	}
	printf("Beverage : ");
	scanf_s("%d", &a.beverage);

	printf("Maindish : ");
	scanf_s("%d", &b.maindish);

	for (int i = 0; i < 3; i++)
	{
		printf("Sidedish%d : ", i + 1);
		scanf_s("%d", &b.sidedish[i]);
	}
	printf("Beverage : ");
	scanf_s("%d", &b.beverage);

	printf("A.Maindish : %d\n", a.maindish);
	for (int i = 0; i < 3; i++)
	{
		printf("A.Sidedish%d :  %d\n", i + 1, a.sidedish[i]);
	}
	printf("A.Beverage : %d\n\n", a.beverage);
	printf("B.Maindish : %d\n", b.maindish);
	for (int i = 0; i < 3; i++)
	{
		printf("B.Sidedish%d :  %d\n", i + 1, b.sidedish[i]);
	}
	printf("B.Beverage : %d\n\n", b.beverage);
}