#include<stdio.h>
struct time {
	int hour, min, sec;
};
int main(void)
{
	struct time t1, t2;
	int h, m, s;
	scanf_s("%2d %2d %2d", &t1.hour, &t1.min, &t1.sec);
	scanf_s("%2d %2d %2d", &t2.hour, &t2.min, &t2.sec);

	if (t2.sec >= t1.sec)
	{
		s = t2.sec - t1.sec;
	}
	else
	{
		s = 60 + t2.sec - t1.sec;
		t2.min--;
	}
	if (t2.min >= t1.min)
	{
		m = t2.min - t1.min;
	}
	else
	{
		m = 60 + t2.min - t1.min;
		t2.hour--;
	}
	h = t2.hour - t1.hour;

	printf("%d %d %d", h, m, s);
}