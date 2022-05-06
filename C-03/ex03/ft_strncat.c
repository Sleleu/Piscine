/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:37:26 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/15 13:41:35 by sleleu           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_len;
	unsigned int	i;

	i = 0;
	if (nb > 0)
	{
		dest_len = ft_strlen(dest);
		while (src[i] != '\0' && i < nb)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	return (dest);
}
/*
int     main(void)
{
	unsigned int	nb = 2;
        char    dest[8] = "abcd";
        char    src[] = "efgh";

        printf("%s\n",ft_strncat(dest, src, nb));

        return (0);
} */
