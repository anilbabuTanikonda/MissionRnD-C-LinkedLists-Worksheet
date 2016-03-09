/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
#include<math.h>

struct node {
	int num;
	struct node *next;
}*start;

struct node * numberToLinkedList(int N) {
	int last, i = 0, j, a[10];
	struct node *tmp, *ptr;

	N = abs(N);

	if (N == 0)
	{
		tmp = (struct node *)malloc(sizeof(struct node));
		tmp->num = N;
		tmp->next = NULL;
		start = tmp;
	}
	else
	{

		while (N != 0)
		{
			last = N % 10;

			tmp = (struct node *)malloc(sizeof(struct node));
			tmp->num = last;

			if (start == NULL)
			{
				tmp->next = NULL;
				start = tmp;
			}
			else
			{
				tmp->next = start;
				start = tmp;
			}
			N = N / 10;
		}

	}
	return start;
}