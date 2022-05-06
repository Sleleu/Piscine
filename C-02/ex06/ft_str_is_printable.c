/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:04:33 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/14 18:01:26 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
			return (0);
		i++;
	}
	return (1);
}
/*
int     main(void)
{
        char  str[] = "";
        printf("chaine : %s\n", str);
        printf("resultat : %d\n", ft_str_is_printable(str));
        return (0);
} */
