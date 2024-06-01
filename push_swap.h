/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:59:43 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/05/26 19:47:25 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list {
    int content;
    void *next;
    int index;
    int move;
}t_list;

void swap_value_in_a(t_list *head);
void swap_value_in_b(t_list *head);
void swap_value_in_ab(t_list *head1, t_list *head2);

void push_to_a(t_list **head1,t_list **head2);
void push_to_b(t_list **head_a, t_list **head_b);

void retate_a(t_list **head);
void retate_b(t_list **head);
void retate_ab(t_list *head1,t_list *head2);

t_list *get_the_last(t_list *head);
t_list *get_the_befor_last(t_list *head);

void retate_revers_a(t_list **head1);
void retate_revers_b(t_list **head2);
void retate_revers_ab(t_list **head2);

t_list *find_the_smaller_number(t_list *head);
int find_the_middel_of_stack(t_list *head);

int lent_of_stack(t_list *head);
t_list *retate_and_save(t_list **head);
t_list *element_in_middel(t_list *head);
int index_small(t_list *head);

#endif
