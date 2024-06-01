#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

t_list  *ft_lstnew(int content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->next = NULL;
	head->content = content;
	return (head);
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int *arr1(t_list *stack)
{
    int *arr = malloc(sizeof(int)*ft_lstsize(stack));

    int i = 0;
    while(i < ft_lstsize(stack))
    {
        arr[i] = 1;
        i++;
    }
    return arr;
}

int *arr2(t_list *stack)
{
    int *arr = malloc(sizeof(int)*ft_lstsize(stack));

    int i = 0;
    while(i < ft_lstsize(stack))
    {
        arr[i] = -1;
        i++;
    }
    return arr;
}

int    *stack_to_arr(t_list *stack)
{
    int *arr = malloc(sizeof(int)*ft_lstsize(stack));

    int i = 0;
    while(stack)
    {
        arr[i] = stack->content;
        stack->content++;
        i++;
        stack = stack->next;
    }
    return arr;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ls;

	if (!lst || !new)
		return ;
	ls = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (ls->next)
		ls = ls->next;
	ls->next = new;
}
int  *find_lis(t_list *stack)
{
    t_list *new = ft_lstnew(stack->content);
    int n = ft_lstsize(new);
    int *d = arr1(stack);
    int *p = arr2(stack);
    int *sta = stack_to_arr(stack);
    int i = 0;
    int j = 0;
    while (i < n)
    {
        j = 0;
        while (j < i)
        {
            if (sta[j] < sta[i] && d[i] < d[j] + 1) 
            {
                d[i] = d[j] + 1;
                p[i] = j;
            }
            j++;
        }
        i++;
    }
    int ans = d[0]; 
    int pos = 0;
    while (i < n) 
    {
        if (d[i] > ans) 
        {
            ans = d[i];
            pos = i;
        }
        i++;
    }
    t_list *sub = NULL;
    while (pos != -1) 
    {
        ft_lstadd_back(&sub,ft_lstnew(sta[pos]));
        pos = p[pos];
    }
    t_list *temp = sub;
    while (temp) 
    {
        printf("%d\n",temp->content);
        temp = temp->next;
    }
    return p;
}

int main()
{
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = 88;

    t_list *node2 = malloc(sizeof(t_list));
    node2->content = 10;

    t_list *node3 = malloc(sizeof(t_list));
    node3->content = 19;

    t_list *node4 = malloc(sizeof(t_list));
    node4->content = 25;

    t_list *node5 = malloc(sizeof(t_list));
    node5->content = 98;

    t_list *node6 = malloc(sizeof(t_list));
    node6->content = 16;

    t_list *node7 = malloc(sizeof(t_list));
    node7->content = 8;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7 = NULL;

    find_lis(node1);
    
}