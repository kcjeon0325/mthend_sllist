#include <stdio.h>
#include <stdlib.h>


typedef struct elementS {
	int data;
	struct elementS next;
} element;

element *find_mtoend_sllist(element *head, int m)
{
	element* mthend, *current = head;
	int i;

	for(i=0; i<m; i++)
	{
		if(current->next) current=current->next;
		else return NULL;
	}

	mthend = head;
	while(current->next)
	{
		current = current->next;
		mthend = mthend->next;
	}
	retrun mthend;
}