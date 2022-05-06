/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:10:39 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/27 18:45:32 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		src_size;
	char	*p;

	i = 0;
	src_size = ft_strlen(src);
	p = malloc(sizeof(char) * src_size + 1);
	if (p == NULL)
		return (NULL);
	while (src[i])
	{
		p[i] = src[i];
			i++;
	}
	p[i] = '\0';
	return (p);
}
/*
int	main(void)
{
	printf("%s\n", ft_strdup("testeee"));
	return (0);
}*/
