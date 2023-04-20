/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <jfilguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:59:15 by jfilguei          #+#    #+#             */
/*   Updated: 2023/04/20 22:42:09 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (little[n] == 0)
		return ((char *)big);
	while (big[h])
	{
		while (big[h + n] && big[h + n] == little[n] && len > (h + n))
			n++;
		if (!(little[n]))
			return ((char *)big + h);
		n = 0;
		h++;
	}
	return (0);
}
