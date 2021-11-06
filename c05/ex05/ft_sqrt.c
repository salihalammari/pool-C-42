/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:28:20 by slammari          #+#    #+#             */
/*   Updated: 2021/10/13 19:57:20 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	square;

	i = 1;
	square = 1;
	while (square < nb && i < nb && i <= 46340)
	{
		square = i * i;
		if (square != nb)
			i++;
	}
	if (square == nb)
		return (i);
	else
		return (0);
}
