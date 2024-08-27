#include<stdio.h>
#include<stdlib.h>
typedef struct polynomial {
	int coef, exp;
	struct polynomial* next;
}list;
void traverse(list head)
{
	list* p = head.next;
	while (p != NULL)
	{
		printf(" %d %d", p->coef, p->exp);
		p = p->next;
	}
	printf("\n");
}
list* appendTerm(list* p, int c, int e)
{
	list* t = (list*)malloc(sizeof(list));
	t->coef = c;
	t->exp = e;
	t->next = NULL;
	p->next = t;

	return t;
}
list addPoly(list x, list y)
{
	list result;
	result.next = NULL;
	list* p = &result;

	list* i = x.next;
	list* j = y.next;

	//list k = result;

	while ((i != NULL) || (j != NULL))
	{
		if ((j == NULL) || (i != NULL && i->exp > j->exp))
		{
			p = appendTerm(p, i->coef, i->exp);
			i = i->next;
		}

		else if ((i == NULL) || (i->exp < j->exp))
		{
			p = appendTerm(p, j->coef, j->exp);
			j = j->next;
		}
		else
		{
			int sum = i->coef + j->coef;
			if (sum != 0)
			{
				p = appendTerm(p, sum, i->exp);
				i = i->next;
				j = j->next;
			}
		}
	}

	return result;
}
int main(void)
{
	list header1, header2, result;
	header1.next = NULL;
	header2.next = NULL;
	result.next = NULL;
	list* p[2] = { &header1, &header2 };
	int n = 0, c, e;


	for (int i = 0; i < 2; i++)
	{
		scanf_s("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf_s("%d %d", &c, &e);
			p[i] = appendTerm(p[i], c, e);
		}
	}

	result = addPoly(header1, header2);

	traverse(result);
}
/*
3
5 3 3 2 3 1
3
2 6 2 3 1 0
*/