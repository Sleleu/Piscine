/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:08:16 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/13 19:01:39 by clacaill         ###   ########.fr       */
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
		ft_top(x, 'o', '-', 'o');
		while (y > 2)
		{
			ft_top(x, '|', ' ', '|');
			y--;
		}
		if (y > 1)
		{
			ft_top(x, 'o', '-', 'o');
		}
	}
}
