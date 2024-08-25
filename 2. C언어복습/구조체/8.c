#include<stdio.h>
struct student7 {
	int id;
	char name[8];
	double grade;
	struct student7* friends;
};
int main(void)
{
	struct student7 a = { 1, "Jason",3.5 };
	struct student7 b = { 2, "Jack",4.5, &a };
	struct student7 c = { 3, "Alice",2.5, &b };
	a.friends = &c;
	printf("%s와 %s는 %s의 친구입니다.", b.friends->name, c.friends->name, a.friends->name);
}