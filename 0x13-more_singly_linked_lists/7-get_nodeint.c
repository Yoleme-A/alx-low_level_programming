#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *temp = head;

	while (temp && p < index)
	{
		temp = temp->next;
		p++;
	}

	return (temp ? temp : NULL);
}
