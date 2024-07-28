/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:26:23 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 15:56:04 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new_node)
{
	if (!lst)
		return ;
	if (*lst)
		new_node->next = *lst;
	*lst = new_node;
}
