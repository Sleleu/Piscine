/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:05:44 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/13 17:15:21 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_top(int x, char a, char b, char c)
{
	ft_putchar(a);
	while (x > 2)
	{
		ft_putchar(b);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_top(x, 'A', 'B', 'C');
		while (y > 2)
		{
			ft_top(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 1)
		{
			ft_top(x, 'C', 'B', 'A');
		}
	}
}
