/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:49:39 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/15 23:23:32 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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
/*
int	main(void)
{
	char	dest[8] = "abcd";
	char	src[] = "efgh";
	
        printf("%s\n",ft_strcat(dest, src));

	return (0);
} */
/*
Permet de concatener deux chaines entre elles. src sera
ajoute a la suite de dest. Il faut prevoir assez de place
dans dest.

On recupere la taille de dest en premier. Grande boucle de
src, et on copie src[i] a la position i + taille de dest
ON fini par ajouter un null byte apres la fin de concatenation.

strcat renvoie dest, la chaine ayant subis la concatenation, ca
permet de cascader plusieurs appels de fonction.
*/
