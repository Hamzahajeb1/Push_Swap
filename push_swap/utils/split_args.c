/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:15:44 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 17:13:45 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**split_args(char **argv)
{
	char	*str;
	char	**arg;
	int		i;

	str = NULL;
	i = 1;
	while (argv[i])
	{
		str = ft_strjoin(str, argv[i]);
		str = ft_strjoin(str, " ");
		if (!(argv[i][0]))
		{
			free(str);
			return (NULL);
		}
		i++;
	}
	arg = ft_split(str, ' ');
	free(str);
	return (arg);
}
