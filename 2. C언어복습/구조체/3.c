#include<stdio.h>
struct complex {
	double real, imag;
};
int main(void)
{
	struct complex com[3] = { {1.2,2.0},{-2.2,-0.3 } };

	com[2].real = com[0].real + com[1].real;
	com[2].imag = com[0].imag + com[1].imag;

	printf("%.1f + %.1fi\n", com[0].real, com[0].imag);
	printf("%.1f + %.1fi\n", com[1].real, com[1].imag);
	printf("%.1f + %.1fi", com[2].real, com[2].imag);
}