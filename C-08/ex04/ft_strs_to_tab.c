/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:47:08 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/28 14:27:03 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		src_size;
	char	*tab;

	i = 0;
	src_size = ft_strlen(src);
	tab = malloc(sizeof(char) * src_size + 1);
	if (tab == NULL)
		return (NULL);
	while (src[i])
	{
		tab[i] = src[i];
			i++;
	}
	tab[i] = '\0';
	return (tab);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*str;
	int			i;

	i = 0;
	str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (str == NULL)
		return (NULL);
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		i++;
	}
	str[i].str = 0;
	return (str);
}
