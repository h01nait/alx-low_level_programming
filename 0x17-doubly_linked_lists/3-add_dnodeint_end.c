#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: pointer to a head of thelist
 * @n: data of the new node
 * Return: return the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur = *head, *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!*head)
	{
		*head = new_node;
		return (*head);
	}
	while (cur->next)
		cur = cur->next;
	cur->next = new_node;
	new_node->prev = cur;
	return (new_node);
}
