/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:14:10 by slammari          #+#    #+#             */
/*   Updated: 2021/09/28 12:32:28 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar( char i, char j, char h)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &h, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	h;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			h = j + 1;
			while (h <= '9')
			{
				ft_putchar(i, j, h);
				if (i != '7')
					write(1, ", ", 2);
				h++;
			}
			j++;
		}
		i++;
	}
}
