/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:18:10 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 16:41:23 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_char(char *str)
{
	int	i;

	i = 0;
	if ('+' == str[i] || '-' == str[i])
	{
		i = 1;
		if (57 >= str[i] && 48 <= str[i])
			i++;
		else
			return (1);
	}
	if (atoi_custm(str) == 2147483649)
		return (1);
	while (str[i])
	{
		if (57 >= str[i] && 48 <= str[i])
			i++;
		else
			return (1);
	}
	return (0);
}

int	*check_digit(char **arg)
{
	int	i;

	i = 0;
	if (arg == NULL)
	{
		write(2, "Error2\n", 6);
		return (NULL);
	}
	while (arg[i])
	{
		if (check_char(arg[i]) == 1)
		{
			write (2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	return (check_duplicated(arg));
}
