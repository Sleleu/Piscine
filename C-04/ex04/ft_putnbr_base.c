/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:54:29 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/24 17:05:46 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_error(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) <= 1)
		return (1);
	while (str[i] != '\0')
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-')
			return (1);
		while (str[j] != '\0')
		{
			if (str[j] == str[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	i;
	long int	base_len;

	base_len = ft_strlen(base);
	i = nbr;
	if (ft_error(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		i = -i;
	}
	if (i > base_len - 1)
	{
		ft_putnbr_base(i / base_len, base);
	}
	i = i % base_len;
	ft_putchar(base[i]);
}
/*
int	main()
{
	char	base[] = "0123456789ABCDEF";
	int	nbr = -2147483648;

	ft_putnbr_base(nbr, base);
	return (0);
}*/
