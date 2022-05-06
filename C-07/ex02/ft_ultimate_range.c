/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 22:53:22 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/28 00:04:48 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size_range;
	int	i;

	i = 0;
	size_range = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(int) * (size_range + 1));
	if (*range == NULL)
		return (-1);
	while (i < size_range)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (size_range);
}
/*
int	main(void)
{
	int	**tab = malloc(6 * sizeof(int *));
	int i = 0;

	int res = 0;
	res = ft_ultimate_range(tab, 0, 5);
	while (i < 4)
	{
		printf("int case %d :%d / result : %d\n", i, tab[0][i], res);	
		i++;
	}
	return (0);
}*/
