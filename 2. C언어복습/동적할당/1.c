#define _CRTDBG_MAP_ALLOC
#include<stdio.h>
#include<stdlib.h>
#include<crtdbg.h>
struct student {
	int id; char name[8]; double grade;
};
int main(void)
{
	int* pi;
	float* pf;
	double* pd;
	struct student* ps;
	pi = (int*)malloc(sizeof(int) * 1);
	pf = (float*)malloc(sizeof(float) * 1);
	pd = (double*)malloc(sizeof(double) * 15);
	ps = (struct student*)malloc(sizeof(ps));


	free(pi);
	free(pf);
	free(pd);
	free(ps);
	_CrtDumpMemoryLeaks();
}