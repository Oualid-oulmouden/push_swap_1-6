/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_value_in_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:54:09 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/05/30 11:51:31 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_stack_b(t_list *head)
{
    t_list *aid ;
    aid = malloc(sizeof(t_list));
    if(head == NULL || head->next == NULL)
        return;
    t_list *t ;
    t = head->next;
    aid->content = head->content;
    head->content = t->content;
    t->content = aid->content;
}
