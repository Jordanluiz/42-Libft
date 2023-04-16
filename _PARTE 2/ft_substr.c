/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <jfilguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:58:28 by jfilguei          #+#    #+#             */
/*   Updated: 2023/04/16 18:26:19 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subs;

	i = 0;
	if (!s)
		return (NULL);
	subs = (char *)malloc(len + 1);
	if (subs == NULL)
		return (NULL);
	if (start <= ft_strlen(s))
	{
		while (i < len && s[i + start])
		{
			subs[i] = s[i + start];
			i++;
		}
	}
	subs[i] = '\0';
	return (subs);
}
