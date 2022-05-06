/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:14:53 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/22 15:12:07 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (res == 0)
		return (1);
	if (res < 1)
		return (0);
	while (res > 1)
	{
		nb = nb * (res - 1);
		res--;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
	return (0);
} */
