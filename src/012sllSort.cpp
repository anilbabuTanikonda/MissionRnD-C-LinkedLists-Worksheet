/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};
void swap(struct node *a, struct node *b)
{
	int t = a->data;
	a->data = b->data;
	b->data = t;
}



void sll_012_sort(struct node *head){
	int flag;
	struct node *ptr, *lptr = NULL;
	do
	{
		flag = 0;
		ptr = head;
		while (ptr->next != lptr)
		{
			if (ptr->data > ptr->next->data)
			{
				flag = 1;
				swap(ptr, ptr->next);
			}
			ptr = ptr->next;
		}
		lptr = ptr;
	} while (flag);




}