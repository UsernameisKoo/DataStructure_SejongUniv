#define _CRTDBG_MAP_ALLOC
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<crtdbg.h>
int main(void)
{
	char** pch;
	pch = (char**)malloc(sizeof(char*) * 3);
	for (int i = 0; i < 3; i++)
	{
		pch[i] = (char*)malloc(sizeof(char) * 4);
	}

	strcpy_s(pch[0], 4, "aaa");
	strcpy_s(pch[1], 4, "bbb");
	strcpy_s(pch[2], 4, "ccc");

	for (int i = 0; i < 3; i++)
	{
		puts(pch[i]);
		free(pch[i]);
	}

	free(pch);

	_CrtDumpMemoryLeaks();
}