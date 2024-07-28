/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:18:25 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 16:32:16 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_num(char **arg, t_list **node)
{
	t_list	*lst;
	int		i;

	i = 0;
	while (arg[i])
	{
		lst = ft_lstnew(ft_atoi(arg[i]));
		ft_lstadd_back(node, lst);
		i++;
	}
	return ;
}
