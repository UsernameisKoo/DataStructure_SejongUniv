#define _CRTDBG_MAP_ALLOC
#include<stdio.h>
#include<stdlib.h>
#include<crtdbg.h>
typedef struct list
{
	char elem;
	struct list* prev, * next;
}List;
void addNodeBefore(List* p, char e)
{
	List* q;
	q = (List*)malloc(sizeof(List));

	q->elem = e;
	q->prev = p->prev;
	q->next = p;
	(p->prev)->next = q;
	p->prev = q;

	return;
}
void removeNode(List* p)
{
	(p->prev)->next = p->next;
	(p->next)->prev = p->prev;

	return;
}
void add(List li, int r, char e)
{
	List* p = &li;
	if (r < 1)
	{
		printf("invalid position");
		return;
	}
	for (int i = 0; i < r; i++)
	{
		if (p->next == NULL)
		{
			printf("invalid position\n");
			return;
		}
		p = p->next;
	}
	addNodeBefore(p, e);

	return;

}
void delete(List li, int r)
{
	List* p;

	if (r < 1)
	{
		printf("invalid position\n");
		return;
	}

	p = &li;

	for (int i = 0; i < r; i++)
	{
		if (p->next == NULL)
		{
			printf("invalid position\n");
			return;
		}
		p = p->next;
	}
	removeNode(p);

	return;
}
void print(List li)
{
	List* p;
	p = li.next;
	while (p->next != NULL)
	{
		printf("%c", p->elem);
		p = p->next;
	}
	printf("\n");
	return;
}
void get(List li, int r)
{
	List* p;
	p = &li;
	if (r < 1)
	{
		printf("invalid position\n");
		return;
	}
	for (int i = 0; i < r; i++)
	{
		if (p->next == NULL)
		{
			printf("invalid position\n");
			return;
		}
		p = p->next;
	}
	if (p->next == NULL)
	{
		printf("invalid position\n");
		return;
	}
	printf("%c", p->elem);
}
int main(void)
{
	List head, tail;
	int N, r;
	char e;
	char cal;

	head.next = &tail;
	tail.prev = &head;
	head.prev = NULL;
	tail.next = NULL;

	scanf_s("%d\n", &N);
	for (int i = 0; i < N; i++)
	{
		scanf_s(" %c", &cal, 1);

		if (cal == 'A')
		{
			scanf_s("%d %c", &r, &e, 1);
			add(head, r, e);
		}
		else if (cal == 'D')
		{
			scanf_s("%d", &r);
			delete(head, r);
		}
		else if (cal == 'P')
		{
			print(head);
		}
		else if (cal == 'G')
		{
			scanf_s("%d", &r);
			get(head, r);
		}
	}
	_CrtDumpMemoryLeaks();
}