/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:11:46 by slammari          #+#    #+#             */
/*   Updated: 2021/10/14 16:13:14 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len ++;
	return (len);
}

int	ft_total_len(int size, char **tab, char *sep)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	if (size < 1)
		return (1);
	while (i < size)
	{
		l += ft_strlen(tab[i]);
		i++;
	}
	l += (ft_strlen(sep) * (size - 1));
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*arr;

	i = 0;
	k = 0;
	arr = (char *)malloc((ft_total_len(size, strs, sep)) * sizeof(char));
	if (!arr)
		arr = NULL;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			arr[k++] = strs[i][j++];
		j = 0;
		while (i != size - 1 && sep[j])
			arr[k++] = sep[j++];
		i++;
	}
	arr[k] = 0;
	return (arr);
}
