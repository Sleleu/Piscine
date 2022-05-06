/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:58:55 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/27 18:26:54 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

int	ft_check_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_check_charset(charset, str[i]))
			i++;
		if (str[i] && !ft_check_charset(charset, str[i]))
			count++;
		while (str[i] && !ft_check_charset(charset, str[i]))
			i++;
	}
	return (count);
}

char	*ft_word(char *str, char *charset)
{
	int		i;
	int		size;
	char	*word;

	i = 0;
	size = 0;
	while (str[size] && !ft_check_charset(charset, str[size]))
		size++;
	i = 0;
	word = malloc(sizeof(char) * size + 1);
	if (word == NULL)
		return (NULL);
	while (i < size)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		count;
	char	**result;

	i = 0;
	count = ft_count(str, charset);
	result = malloc(sizeof(char *) * (count + 1));
	if (result == NULL)
		return (NULL);
	while (*str)
	{
		while (*str && ft_check_charset(charset, *str))
			str++;
		if (*str)
		{
			result[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !ft_check_charset(charset, *str))
			str++;
	}
	result[i] = '\0';
	return (result);
}
/*
   int	main(void)
   {
   int	i = 0;
   char	*charset = "/..";
   char	*str = "";
   char	**result;

   result = ft_split(str, charset);

   while (result[i])
   {
   printf("%s\n", result[i]);
   i++;
   }
   return (0);
   }*/
