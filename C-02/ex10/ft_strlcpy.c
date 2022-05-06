/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:58:33 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/15 17:52:52 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	src[] = "0123456789abcdef";
	char	dest[] = "coucoucoucou";
	unsigned int size = 10;
	unsigned int renvoi = 0;
	
	printf("test src : %s, test dest %s,
       	size %d", src, dest, size);
		renvoi = ft_strlcpy(dest, src, size);
	printf("test src : %s, test dest %s,
       	size %d, renvoi %d", src, dest, size, renvoi);
	return (0);
} */
