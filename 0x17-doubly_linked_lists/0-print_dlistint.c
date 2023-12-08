#include "lists.h"

/**
print_dlistint - this function prints all the elements of a dlistint list
@h: pointer to the head of the list
Return: the nodes count
*/
size_t print_dlistint(const dlistint_t *h);
{
	size_t number = 0;

	if (h == NULL)
		return (number);
	for (; h->prev != NULL; h = h->prev)
		;
	for (; h != NULL; h = h->next)
	{
		printf("d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
