/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_custm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:25:50 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 15:53:38 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

long	atoi_custm(char *str)
{
	int					i;
	long long			nb;
	int					sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nb = (nb * 10) + str[i++] - 48;
		if (nb > INT_MAX && sign == 1)
			return (2147483649);
		else if (nb > INT_MAX && sign == -1)
			return (2147483649);
	}
	return ((nb * sign));
}