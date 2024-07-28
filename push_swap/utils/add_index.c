/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:18:34 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 17:15:59 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_index(int *str, int len, t_list *stack_a)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (stack_a->data == str[i])
		{
			stack_a->index = i;
			break ;
		}
		i++;
	}
	return ;
}

void	add_index(int *str, int len, t_list **stack_a)
{
	t_list	*lst;

	lst = (*stack_a);
	while (lst)
	{
		find_index(str, len, lst);
		lst = lst->next;
	}
}
