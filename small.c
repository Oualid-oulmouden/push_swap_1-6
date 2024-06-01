#include "push_swap.h"
#include <stdio.h>
#include <limits.h>

t_list *find_the_smaller_number(t_list *head)
{
    t_list *prv = malloc(sizeof(t_list));
    prv->index = 0;
    prv->content = INT_MAX;
    while (head != NULL)
    {
        if(head->content <= prv->content)
        {
            prv->content = head->content;
            prv->index++;
        }
        head = head->next;
    }
    return prv;
}

int index_small(t_list *head)
{
    t_list *prv = malloc(sizeof(t_list));
    prv->index = 0;
    prv->content = INT_MAX;
    while (head != NULL)
    {
        if(head->content <= prv->content)
        {
            prv->content = head->content;
            prv->index++;
        }
        head = head->next;
    }
    return prv->index;

}
