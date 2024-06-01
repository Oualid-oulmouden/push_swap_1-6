/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 09:30:16 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/05/25 09:31:50 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_list *get_the_last(t_list *head)
{
    while(head && head->next != NULL)
        head = head->next;
    return head;
}

t_list *get_the_befor_last(t_list *head)
{
    t_list *temp;
    temp = head;
    t_list *prv;
    while(temp->next)
    {
        prv = temp;
        temp = temp->next;
    }
    return prv;
}

