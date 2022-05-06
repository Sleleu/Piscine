/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:03:24 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/17 10:36:37 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int     main(void)
{
	unsigned int	n = 4;
        char    s1[] = "dedDe";
        char    s2[] = "dedse";

        printf("%d\n", strncmp(s1, s2, n));
        printf("%d\n",ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
}
*/
