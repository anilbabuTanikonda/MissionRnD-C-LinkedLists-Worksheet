/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>
#include<string.h>
#include<stdlib.h>
struct node {
	int digit1;
	int digit2;
	struct node *next;
};
/*struct node * createNode(int n1, int n2) {
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->digit1 = n1;
	newNode->digit2 = n2;
	newNode->next = NULL;
	return newNode;
}


void add(struct node **head, int p, int q){
	struct node *temp = *head;
	if (*head == NULL){
		(*head) = createNode(p, q);
		(*head)->next = NULL;
	}
	else{
		while (temp->next != NULL){
			temp = temp->next;
		}
		temp->next = createNode(p, q);
		temp->next->next = NULL;
	}
}
*/

int convert_sll_2digit_to_int(struct node *head){

	int n = 0, i = 0;
	char a[10];
	struct node *pt;
	//add(&head, 0, 0);
	//add(&head, 2, 3);
	//add(&head, 5, 3);
	pt = head;
	while (pt != NULL)
	{
		a[i] = pt->digit1 + '0';
		i++;
		a[i] = pt->digit2 + '0';
		i++;
		pt = pt->next;
	}
	a[i] = '\0';
	n = atoi(a);

	return n;
}
