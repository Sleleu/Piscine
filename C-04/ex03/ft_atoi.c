/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:47:03 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/17 16:31:30 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	long int	moins;
	long int	resultat;

	moins = 1;
	resultat = 0;
	while (*str <= ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			moins = moins * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		resultat = resultat * 10 + (*str - 48);
		str++;
	}
	return (resultat * moins);
}
/*
int	main(void)
{
	char	str[] = "      ---+12345uuuu321";
	int	i;
	i = ft_atoi(str);
	printf("%d", i);
}
*/
/*
On deplace la chaine tant qu'on tombe sur les caracteres recherches
moins++ si on tombe sur un moins
On commence par les white space, et ensuite on cut

boucle isspace, si non, boucle plus et ;oins, et apres boucle 0 a 9
*/
