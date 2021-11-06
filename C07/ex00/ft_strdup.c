/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:17:30 by slammari          #+#    #+#             */
/*   Updated: 2021/10/14 16:15:27 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*str;

	length = 0;
	i = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	str = (char *)malloc((length + 1) * sizeof(char));
	while (i < length)
	{
		str[i] = src[i];
		i++;
	}
	str[length] = '\0';
	return (str);
}
