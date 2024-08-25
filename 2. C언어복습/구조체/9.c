#include<stdio.h>
typedef struct lunchbox {
	int maindish, sidedish[3], beverage;
}box;
int main(void)
{
	box b = { 10,{3,0,5},10 };
	printf("%d %d %d %d %d", b.maindish, b.sidedish[0], b.sidedish[1], b.sidedish[2], b.beverage);
}