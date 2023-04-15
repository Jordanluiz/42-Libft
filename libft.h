/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <jfilguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:42:49 by jfilguei          #+#    #+#             */
/*   Updated: 2023/04/16 00:26:58 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <ctype.h>

int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_atoi(const char *nptr);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);




#endif