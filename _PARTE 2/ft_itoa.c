/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <jfilguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:58:56 by jfilguei          #+#    #+#             */
/*   Updated: 2023/04/17 20:36:48 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_number(int n)
{
	int		i;
	long	number;

	i = 1;
	number = n;
	if (n < 0)
	{
		number = -number;
		i++;
	}
	while (number >= 10)
	{
		number /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	number;
	int		size;
	char	*str;

	number = n;
	if (n < 0)
		number = -number;
	size = size_number(n);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	str[size--] = '\0';
	while (number > 0)
	{
		str[size--] = number % 10 + '0';
		number /= 10;
	}
	return (str);
}
