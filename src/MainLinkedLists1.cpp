/*

Use MainLinkedLists1 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.s

Do not write same add,display function in every CppFile .VS throws an error if two files
have some functions with same signature.
You can either change the signature in each file by using add1,display2 like that or 
keep a common header file which has functions for handling common tasks for debugging
like displaying and include that header file in each Problem file .

Only jump into this lesson after you did all specified functions in Tutorial Lesson.

Objectives of C-LinkedLists-1 Lesson:

->Add/Delete/Display nodes in SLL
->Manipulate Links in SLL
->Handling SLL which have nodes of more than one data field


*/


//Do not edit below Header Files
#include <stdio.h>
#include<malloc.h>
#include<conio.h>
#include "FunctionHeadersLinkedLists1.h"
struct node
{
	int num;
	struct node *next;
}*start1;
int main(){

	//Test 012SortSll

	//Test numberToLinkedList


	//Test removeEveryKthNode

	int N = 12345678;
	int last;
	struct node *tmp;
	while (N != 0)
	{
		last = N % 10;

		tmp = (struct node *)malloc(sizeof(struct node));
		tmp->num = last;

		if (start1 == NULL)
		{
			tmp->next = NULL;
			start1 = tmp;
		}
		else
		{
			tmp->next = start1;
			start1= tmp;
		}
		N = N / 10;
	}

struct node *head=removeEveryKthNode(start1,2);
struct node *ptr;
ptr = head;
while (ptr!= NULL)
{
	printf("%d", ptr->num);
	ptr = ptr->next;
}
	//Test sortLinkedList

	//Test twodigitLinkedList
	getch();
	return 0;
}