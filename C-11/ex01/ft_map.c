/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:53:15 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/31 19:29:07 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/*
int	ft_double(int nb)
{
	nb = nb * 2;
	return (nb);
}
*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*cpy;

	i = 0;
	cpy = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		cpy[i] = (*f)(tab[i]);
		i++;
	}
	return (cpy);
}
/*
int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	ft_map(tab, 5, &ft_double);
	return (0);
}*/
