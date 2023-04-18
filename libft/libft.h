/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <jfilguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:42:49 by jfilguei          #+#    #+#             */
/*   Updated: 2023/04/19 00:57:45 by jfilguei         ###   ########.fr       */
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

//#############################################
//####               Parte 1               ####
//#############################################

/**Verifica se é um caracter do alfabeto*/
int		ft_isalpha(int c);

/**Verifica se o caracter é alfanumérico*/
int		ft_isalnum(int c);

/**Verifica se o caracter é um digito (0-9)*/
int		ft_isdigit(int c);

/**Verifica se o caracter esta na tabela ASCII*/
int		ft_isascii(int c);

/**Verifica se o caracter pode ser impresso*/
int		ft_isprint(int c);

/**Converte letras maiúsculas em minúsculas*/
int		ft_tolower(int c);

/**Converte letras minúsculas em maiúsculas*/
int		ft_toupper(int c);

/**Converte String em numeros inteiro*/
int		ft_atoi(const char *nptr);

/**Compara os primeiros n bytes da memória de s1 e de memória s2. 
 * retorn < 0, s1 é menor. retorn > 0, s2 é menor. Return = 0.*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**Compara os primeiros n caracteres de s1 e de memória s2. 
 * retorn < 0, s1 é menor. retorn > 0, s2 é menor. Return = 0.*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**Apaga os dados nos n primeiros bytes da memória do local 
 * apontado por s e escreve zeros no lugar.*/
void	ft_bzero(void *s, size_t n);

/**Copia o caractere c para os primeiros n caracteres da 
 * string apontada por s.*/
void	*ft_memset(void *s, int c, size_t n);

/**Procura a primeira ocorrência do caractere c nos primeiros 
 * n bytes da string apontada por s. 
 * Retorna um ponteiro para o byte correspondente.*/
void	*ft_memchr(const void *s, int c, size_t n);

/**Copia n caracteres da memória de src para a memória de dest.*/
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**Copia n caracteres de src para dest, mas para blocos de memória 
 * sobrepostos, memmove() é uma abordagem mais segura do que memcpy().*/
void	*ft_memmove(void *dest, const void *src, size_t n);

/**Aloca a memória solicitada e retorna um ponteiro para ela. 
 * O calloc, diferente do malloc, define a memória alocada como zero.*/
void	*ft_calloc(size_t nmemb, size_t size);

/**Retorna um ponteiro para uma string(criado com malloc), que é 
 * duplicata da string apontada por s.*/
char	*ft_strdup(const char *s);

/**Procura a primeira ocorrência do caractere c na string apontada por s.*/
char	*ft_strchr(const char *s, int c);

/**Procura a última ocorrência do caractere c na string apontada pelo s.*/
char	*ft_strrchr(const char *s, int c);

/**Encontra a primeira substring(little) em uma string(big) com 
 * comprimento limitado(len)*/
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**Calcula o comprimento de uma determinada string.*/
size_t	ft_strlen(const char *s);

/**Copia string de src para dest até o size.*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**Acrescenta a string src ao final da string dst.*/
size_t	ft_strlcat(char *dst, const char *src, size_t size);

//#############################################
//####               Parte 2               ####
//#############################################

char	*ft_itoa(int n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

//#############################################
//####                bonus                ####
//#############################################

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**Conta o número de nós em uma lista*/
int		ft_lstsize(t_list *lst);

/**Adiciona um novo nó no inicio da lista 
 * Caso exista um nó no inicio, adiciona como next do novo*/
void	ft_lstadd_front(t_list **lst, t_list *new);

/**Adiciona o nó 'novo' no final da lista.*/
void	ft_lstadd_back(t_list **lst, t_list *new);

/**Toma como parâmetro um nó e libera a memória do conteúdo do nó 
 * usando a * função 'del' fornecida como parâmetro e libera o nó. 
 * A memória de 'próximo' não deve ser liberada*/
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**Itera a lista 'lst' e aplica a função 'f' no conteúdo de cada nó.*/
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**Exclui e libera o nó fornecido e todos os sucessores desse nó,
 * usando a função 'del' e free.
 * o ponteiro para a lista deve ser definido como NULL*/
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**Retorna o último nó da lista*/
t_list	*ft_lstlast(t_list *lst);

/**Adicionar um novo nó e inicializar next como null*/
t_list	*ft_lstnew(void *content);

/**lista 'lst' e aplica a função 'f' no conteúdo de cada nó. 
 * Cria uma nova lista resultante das aplicações da função 'f'. 
 * A função 'del' é usada para excluir o conteúdo de um nó, se necessário*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif