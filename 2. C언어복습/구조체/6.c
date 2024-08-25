#include<stdio.h>
struct complex {
	double real, imag;
};
struct complex add_complex(struct complex x, struct complex y)
{
	struct complex z;
	z.real = x.real + y.real;
	z.imag = x.imag + y.imag;

	return z;
}
int main(void)
{
	struct complex a, b, c;
	struct complex* p = &a;
	printf("첫번째 real, imag: ");
	scanf_s("%lf %lf", &p->real, &p->imag);
	p = &b;
	printf("두번째 real, imag: ");
	scanf_s("%lf %lf", &p->real, &p->imag);

	c = add_complex(a, b);
	printf("%.1f + %.1fi", c.real, c.imag);
}