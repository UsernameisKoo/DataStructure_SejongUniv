#define _CRTDBG_MAP_ALLOC
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<crtdbg.h>
typedef struct book_title {
	char* title;

}b;
int main(void)
{
	int n, len;

	b* bp = NULL;
	scanf_s("%d\n", &n);
	//getchar();

	bp = (b*)malloc(sizeof(b) * n);
	if (bp == NULL)
	{
		return -1;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			char t[100] = { 0 };
			fgets(t, 100, stdin);
			len = (int)strlen(t);

			bp[i].title = (char*)malloc(sizeof(char) * (len + 1));
			if (bp[i].title == NULL)
			{
				return -1;
			}
			strcpy_s(bp[i].title, len + 1, t);
		}

		for (int i = 0; i < n; i++)
		{
			printf("%s\n", bp[i].title);
		}
		free(bp);
		_CrtDumpMemoryLeaks();
	}
}