#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the first node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count;

    slow = head;
    fast = head;
    count = 0;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            printf("-> [%p] %d\n", (void *) slow, slow->n);
            exit(98);
        }
    }

    while (head)
    {
        printf("[%p] %d\n", (void *) head, head->n);
        head = head->next;
        count++;
    }

    return (count);
}

