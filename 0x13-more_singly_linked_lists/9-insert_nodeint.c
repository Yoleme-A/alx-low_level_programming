#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @in: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int in, int n)
{
	unsigned int i;
	listint_t *nw;
	listint_t *temp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw || !head)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (in == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}

	for (i = 0; temp && i < in; i++)
	{
		if (i == in - 1)
		{
			nw->next = temp->next;
			temp->next = nw;
			return (nw);
		}

		else
			temp = temp->next;
	}

	return (NULL);
}
