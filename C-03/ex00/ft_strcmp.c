/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:15:03 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/17 10:36:17 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}	
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char	s1[] = "abcd";
	char	s2[] = "abcd";

        printf("%d\n",strcmp(s1, s2));
	printf("%d\n",ft_strcmp(s1, s2));
        printf("%d\n",ft_strcmp(s1, s2));

}*/
