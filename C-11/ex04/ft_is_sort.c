/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:32:17 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/31 19:30:34 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
int	ft_illyes(int nb, int nb2)
{
	return (nb - nb2);
}*/

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i + 1 < length && (*f)(tab[i], tab[i + 1]) == 0)
		i++;
	if (i + 1 < length && (*f)(tab[i], tab[i + 1]) <= 0)
	{
		while (i + 1 < length && (*f)(tab[i], tab[i + 1]) <= 0)
			i++;
		if (i + 1 < length && (*f)(tab[i], tab[i + 1]) > 0)
			return (0);
	}
	if (i + 1 < length && (*f)(tab[i], tab[i + 1] >= 0))
	{
		while (i + 1 < length && (*f)(tab[i], tab[i + 1]) >= 0)
			i++;
		if (i + 1 < length && (*f)(tab[i], tab[i + 1]) < 0)
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	int	tab[5] = {5,5,5,2,1};
	int	i = 0;
	i = ft_is_sort(tab, 5, &ft_illyes);
	printf("%d", i);
}*/
