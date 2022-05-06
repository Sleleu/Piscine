/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:28:29 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/29 15:24:12 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strs_len(char **strs, int size)
{
	int	strs_len;
	int	i;

	strs_len = 0;
	i = -1;
	while (++i < size)
		strs_len += ft_strlen(strs[i]);
	return (strs_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		len_sep;
	int		r_len;

	if (size <= 0)
	{
		result = malloc(sizeof(char));
		*result = 0;
		return (result);
	}
	len_sep = ft_strlen(sep);
	r_len = ft_strs_len(strs, size) + (size - 1) * len_sep + 1;
	result = malloc(r_len * sizeof(char));
	result[0] = '\0';
	if (!result)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}
/*
int    main(void)
{
	int    size = 3;
	char    *strs[3] = {"test", "test2", "test3"};
	char    *sep = "//";
	char    *res;

	res = ft_strjoin(size, strs, sep);
	if (res == NULL)
		printf("null");
	else
		printf("%s\n",res);
	return (0);
}*/
