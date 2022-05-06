/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:53:47 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/22 16:15:03 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = nb * ft_recursive_factorial(nb - 1);
	return (i);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(10));
	return (0);
}*/
