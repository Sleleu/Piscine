/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:43:09 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/24 16:39:14 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (ft_strlen(base) <= 1)
			return (0);
		if (base[i] == '+' || base[i] == '-' || base[i] <= ' ')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_index(char *str, char *base)
{
	long int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (*str == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	long int	moins;
	long int	resultat;
	int			base_len;

	moins = 1;
	resultat = 0;
	base_len = ft_strlen(base);
	if (!ft_check_base(base))
		return (0);
	while (*str <= ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			moins = moins * -1;
		str++;
	}
	while (ft_check_index(str, base) != -1)
	{
		resultat = resultat * base_len + ft_check_index(str, base);
		str++;
	}
	return (resultat * moins);
}
/*
int	main(void)
{
	char	base[] = "0123456789ABCDEF";
	char    str[] = "   ----+--7Buuu";
	int     i;
	i = ft_atoi_base(str, base);
	printf("%d", i);
}*/
