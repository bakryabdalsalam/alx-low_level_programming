#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to a pointer to the first node of the list
 *
 * Return: number of nodes in the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *slow, *fast, *temp;
    size_t count;

    if (h == NULL || *h == NULL)
        return (0);

    slow = *h;
    fast = (*h)->next;
    count = 0;

    while (fast)
    {
        if (slow >= fast)
        {
            slow = *h;
            for (count = 0; slow != fast; count++)
                slow = slow->next;
            slow = *h;
            for ( ; slow != fast; count++)
            {
                temp = slow;
                slow = slow->next;
                free(temp);
            }
            temp = slow;
            slow = slow->next;
            free(temp);
            free(slow);
            *h = NULL;
            return (count + 1);
        }
        slow = slow->next;
        fast = fast->next;
        if (fast)
            fast = fast->next;
    }

    while (*h)
    {
        temp = *h;
        *h = (*h)->next;
        free(temp);
        count++;
    }

    *h = NULL;
    return (count);
}

