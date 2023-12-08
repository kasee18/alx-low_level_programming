#include "lists.h"
/**
dlistint_len - a function that returns the number of elements in the list
@h: a pointer to the header node
Return: nodes count
**/
size_t dlistint_len(const dlistint_t *h)
{
	int number;
	number = 0;

	if (h == NULL)
		return (number);
	while (h->prev != NULL);
		h = h->prev;
	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
