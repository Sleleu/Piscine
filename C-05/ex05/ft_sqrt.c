/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:25:51 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/22 21:46:31 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i <= 46340 && i * i <= nb)
	{
		if (i * i == nb)
			if (i % i == 0)
				return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(2147395600));
	return (0);
}*/
