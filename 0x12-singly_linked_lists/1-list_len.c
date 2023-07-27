#include "lists.h"

/**
  *list_len - prints the elements in list.
  *@h: pointer to list.
  *
  *Return: element size in a linked list
  */
size_t list_len(const list_t *h)
{
	int k;

	k= 0;

	while (h != NULL)
	{
		h = h->next;
		k++;
	}
	return (k);
}
