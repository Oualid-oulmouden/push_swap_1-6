#include "push_swap.h"
#include <stdio.h>

int lent_of_stack(t_list *head)
{
    int lent = 0;
    while (head != NULL)
    {
        head = head->next;
        lent++;
    }
    return lent;
}

int find_the_middel_of_stack(t_list *head)
{
    head->index = 0;
    while (head != NULL)
    {
        if(head->index == (lent_of_stack(head)-1)/2)
            return head->index;
        head->index++;
    }
    return 0;
}

t_list *element_in_middel(t_list *head)
{
    head->index = 0;
    while (head != NULL)
    {
        if(head->index == (lent_of_stack(head)-1)/2) 
            return head;
        head = head->next;
        head->index++;
    }
    return 0;
}
