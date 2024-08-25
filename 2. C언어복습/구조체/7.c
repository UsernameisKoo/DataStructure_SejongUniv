#include<stdio.h>
struct complex
{
	double real;
	double imag;
};
struct complex* larger_complex(struct complex* px, struct complex* py)
{
	if ((px->real) * (px->real) + (px->imag) * (px->imag) >= (py->real) * (py->real) + (py->imag) * (py->imag))
		return px;
	else
		return py;
}
int main(void)
{
	struct complex a, b;
	struct complex* pa, * pb, * big;
	pa = &a;
	pb = &b;
	printf("첫번째 real, imag: ");
	scanf_s("%lf %lf", &pa->real, &pa->imag);
	printf("두번째 real, imag: ");
	scanf_s("%lf %lf", &pb->real, &pb->imag);

	big = larger_complex(pa, pb);
	printf("%.1f + %.1fi", big->real, big->imag);
}