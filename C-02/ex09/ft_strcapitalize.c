/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:49:12 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/15 17:42:57 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_min(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_first(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (str);
	ft_min(str);
	if (ft_first(str))
		i++;
	while (str[i] != '\0')
	{
		if ((str[i - 1] < '0' || str[i - 1] > '9')
			&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
			&& (str[i - 1] < 'a' || str[i - 1] > 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}	
		i++;
	}
	return (str);
}
/*
int     main(void)
{
        char    str[] = "salut comment ca va ? 42mots &&test ^test ni+li+ri";
        printf("chaine : %s\n", str);
	ft_strcapitalize(str);
        printf("resultat : %s\n", str);
        return (0);
} */
