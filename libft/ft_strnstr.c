/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <jfilguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:59:15 by jfilguei          #+#    #+#             */
/*   Updated: 2023/04/12 20:55:13 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;	

	if ((!big || !little) && len == 0)
		return (NULL);
	i = 0;
	little_len = ft_strlen(little);
	if (!little[0])
		return ((char *)big);
	while (big[i] != '\0' && i <= (len - little_len) && len > 0)
	{
		if (big[i] == little[0])
			if (!ft_memcmp(big + i, little, little_len))
				return ((char *)big + i);
		i++;
	}	
	return (NULL);
}
