/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:01:33 by slammari          #+#    #+#             */
/*   Updated: 2021/10/14 17:01:58 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int	srccount;
	int	i;
	char
		*p;

	i = 0;
	srccount = ft_strlen(src);
	p = malloc((srccount + 1) * (sizeof(char)));
	if (p == NULL)
		return (NULL);
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	t_stock_str			*t;

	t = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (t == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		t[i].str = av[i];
		t[i].size = ft_strlen(av[i]);
		t[i].copy = ft_strdup(av[i]);
		i++;
	}
	t[i].str = 0;
	t[i].size = 0;
	t[i].copy = 0;
	return (t);
}

// int	main(int ac ,char** av)
// {
// 	t_stock_str* s = ft_strs_to_tab(ac, av);
// 	ft_show_tab(s);
// 	return (0);
// }
