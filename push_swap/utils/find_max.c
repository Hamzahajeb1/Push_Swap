/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:17:36 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 17:03:52 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max(int len, t_list *stack_b)
{
	t_list	*lst;
	int		i;

	lst = (stack_b);
	i = 0;
	while (lst)
	{
		if (lst->index == len)
			return (i);
		lst = lst->next;
		i++;
	}
	return (-1);
}
