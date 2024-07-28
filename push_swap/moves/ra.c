/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:23:58 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 16:04:22 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_list **a, int i)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!a || !(*a))
		return ;
	tmp = ft_lstnew((*a)->data);
	tmp->index = (*a)->index;
	ft_lstadd_back(a, tmp);
	tmp2 = (*a);
	(*a) = (*a)->next;
	free(tmp2);
	if (i == 1)
		write (1, "ra\n", 3);
}
