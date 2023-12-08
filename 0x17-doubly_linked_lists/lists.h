#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
/**
struct dlistint_s - a doubly linked list function
@k: an int
@prev: a pointer to the previous node
@next: a pointer to the next node
*/
typedef struct dlistint_s
{
	int k;
	struct dlistint_s *prev;
	struct dlistint *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
ize_t dlistint_len(const dlistint_t *h);
stint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);


#endif


