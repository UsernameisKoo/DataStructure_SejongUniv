#include<stdio.h>
struct lunchbox {
	int maindish, sidedish[3], beverage;
};
int main(void)
{
	struct lunchbox box[2];

	printf("box1.maindish : ");
	scanf_s("%d", &box[0].maindish);
	printf("box1.sidedish : ");
	scanf_s("%d %d %d", &box[0].sidedish[0], &box[0].sidedish[1], &box[0].sidedish[2]);
	printf("box1.beverage : ");
	scanf_s("%d", &box[0].beverage);

	printf("box2.maindish : ");
	scanf_s("%d", &box[1].maindish);
	printf("box1.sidedish : ");
	scanf_s("%d %d %d", &box[1].sidedish[0], &box[1].sidedish[1], &box[1].sidedish[2]);
	printf("box1.beverage : ");
	scanf_s("%d", &box[1].beverage);

	for (int i = 0; i < 2; i++)
	{
		printf("box%d.maindish : %d\n", i, box[i].maindish);
		printf("box%d.sidedish : %d %d %d\n", i, box[i].sidedish[0], box[i].sidedish[1], box[i].sidedish[2]);
		printf("box%d.beverage : %d\n\n", i, box[i].beverage);
	}
}