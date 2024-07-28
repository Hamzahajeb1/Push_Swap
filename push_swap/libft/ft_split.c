/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:26:50 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 15:58:18 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	void	*ft_free_tab(char **tab, int size)
{
	while (size >= 0)
	{
		free(tab[size]);
		size--;
	}
	free(tab);
	return (NULL);
}

static	int	ft_wordlen(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str && *str == c)
		str++;
	while (*str && *str != c)
	{
		str++;
		i++;
	}
	return (i);
}

static	int	ft_tabsize(const char *str, char c)
{
	int	size;

	size = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
			size++;
		while (*str && *str != c)
			str++;
	}
	return (size);
}

static	char	*ft_cpyword(const char *str, char c)
{
	char	*i;
	int		j;
	int		k;

	k = ft_wordlen(str, c);
	i = (char *)malloc(sizeof(char) * (k + 1));
	if (!i)
		return (NULL);
	j = 0;
	while (j < k)
	{
		i[j] = str[j];
		j++;
	}
	i[j] = '\0';
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**bs;
	int		i;

	if (!s)
		return (0);
	bs = (char **)malloc(sizeof(char *) * (ft_tabsize(s, c) + 1));
	if (!bs)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			bs[i] = ft_cpyword(s, c);
			if (!bs[i])
				return (ft_free_tab(bs, i));
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	bs[i] = NULL;
	return (bs);
}
