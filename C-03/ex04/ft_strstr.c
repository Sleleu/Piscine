/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 23:10:45 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/17 17:47:43 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
#include <stddef.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			s = str;
			t = to_find;
			while (*str == *t)
			{
				str++;
				t++;
				if (*t == '\0')
					return (s);
			}
		}
		else
			str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s1[100] = "fdfd";
	char	s3[100] = "a";

	printf("%s\n", strstr(s1, s3));
	printf("%s\n", ft_strstr(s1, s3));
}
*/
/*
Grande boucle, si on trouve une occurrence, on fait prendre
a *s et *t la valeur de str et to_find, pour pas toucher aux
adresses.
Tant que *str et *t sont similaires, on incremente str et t
jusqua tenter d'arriver a la fin de t, null byte.
SI OUI : On return *s, qui a la valeur du str deja incremente
SI NON : On repars dans la boucle, sans toucher au else.

Si une nouvelle occurrence arrive, s et t prennent a nouveau
la valeur de str et to_find, et recommencent a chercher la fin
de to_find.
*/
