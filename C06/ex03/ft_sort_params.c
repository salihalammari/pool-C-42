/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:46:23 by slammari          #+#    #+#             */
/*   Updated: 2021/10/12 20:29:24 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_params(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		j = 1;
		while (av[j] != '\0')
		{
			i = 0;
			while (av[j][i] != '\0')
			{
				write (1, &av[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			j++;
		}
	}
}

int	main(int ac, char **av)
{
	int	c;
	char
		*tmp;

	c = 1;
	while (c < ac - 1)
	{
		if (ft_strcmp(av[c], av[c + 1]) > 0)
		{
			tmp = av[c];
			av[c] = av[c + 1];
			av[c + 1] = tmp;
			c = 1;
		}
		else
			c ++;
	}
	ft_print_params(ac, av);
}
