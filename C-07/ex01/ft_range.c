/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 22:37:38 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/29 11:43:53 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	range;

	i = 0;
	range = (max - min);
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int *) * range + 1);
	if (tab == NULL)
		return (NULL);
	while (i < range)
	{
		tab[i] = min;
		min++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
int	main(void)
{
	int	i;
	int	*tab = NULL;

	i = 0;
	tab = ft_range(1, 3);
	while (i < 3)
	{
		printf("test : %d\n", tab[i]);
		i++;
	}
	free (tab);
	return (0);
}*/
