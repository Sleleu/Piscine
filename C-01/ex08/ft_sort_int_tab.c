/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:24:16 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/19 11:39:41 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	i;
	int	tab[] = {7,6,1,8,2,4};

	i = 0;
	while (i < 6)
	{
		printf("%d\n",tab[i]);
		i++;
	}

	ft_sort_int_tab(tab, 6);

	i = 0;
        while (i < 6)
        {
                printf("%d\n",tab[i]);
                i++;
        }
	return (0);
}*/
