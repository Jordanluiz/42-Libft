# Descrição das funções
## Mandatory (I) / 23 funções

### ft_atoi 
Converte String em numeros inteiro.
### ft_bzero 
Apaga os dados nos n primeiros bytes da memória do local apontado por s e escreve zeros no lugar.
### ft_calloc 
Aloca a memória solicitada e retorna um ponteiro para ela. O calloc, diferente do malloc, define a memória alocada como zero.
### ft_isalnum 
Verifica se o caracter é alfanumérico.
### ft_isalpha 
Verifica se é um caracter do alfabeto.
### ft_isascii 
Verifica se o caracter esta na tabela ASCII.
### ft_isdigit 
Verifica se o caracter é um digito (0-9).
### ft_isprint 
Verifica se o caracter pode ser impresso.
### ft_memchr 
Procura a primeira ocorrência do caractere c nos primeiros n bytes da string apontada por s. Retorna um ponteiro para o byte correspondente.
### ft_memcmp 
### ft_memcpy 
Copia n caracteres da memória de src para a memória de dest.
### ft_memmove 
Copia n caracteres de src para dest, mas para blocos de memória sobrepostos, memmove() é uma abordagem mais segura do que memcpy().
### ft_memset 
Copia o caractere c para os primeiros n caracteres da string apontada por s.
### ft_strchr 
Procura a primeira ocorrência do caractere c na string apontada por s.
### ft_strdup 
Retorna um ponteiro para uma string(criado com malloc), que é 
  duplicata da string apontada por s.
### ft_strlcat 
Acrescenta a string src ao final da string dst.
### ft_strlcpy 
Copia string de src para dest até o size.
### ft_strlen 
Calcula o comprimento de uma determinada string.
### ft_strncmp 
Compara os primeiros n caracteres de s1 e de memória s2. 
Retorn < 0, s1 é menor. retorn > 0, s2 é menor. Return = 0.
### ft_strnstr 
Encontra a primeira substring(little) em uma string(big) com comprimento limitado(len).
### ft_strrchr 
Procura a última ocorrência do caractere c na string apontada pelo s.

### ft_tolower 
Converte letras maiúsculas em minúsculas.

### ft_toupper 
Converte letras minúsculas em maiúsculas.

## Mandatory (II) / 11 funções	

### ft_itoa 	
Aloca memória e retorna uma string representando o inteiro recebido como argumento. Números negativos devem ser tratados.
### ft_putchar_fd 
Emite o caractere 'c' para o descritor de arquivo fornecido.

### ft_putendl_fd 	
Emite a string 's' para o descritor de arquivo seguido por uma nova linha.

### ft_putnbr_fd 	
Emite o inteiro 'n' para o descritor de arquivo fornecido.
### ft_putstr_fd 	
Emite a string 's' para o descritor de arquivo fornecido.

### ft_split 	
Aloca memória e retorna um array de strings obtido dividindo 's' usando o
  caractere 'c' como delimitador. 
  A matriz deve terminar com um ponteiro NULL.
### ft_striteri 
Aplica a função 'f' em cada caractere da string passada como argumento,
passando seu índice como primeiro argumento. Cada caractere é passado
por endereço para 'f' para ser modificado se necessário.
### ft_strjoin 	
Aloca memória e retorna uma nova string, que é o resultado da concatenação de 's1' e 's2'.
### ft_strmapi 	
Aplica a função 'f' a cada caractere da string 's', passando seu índice como primeiro argumento para criar uma nova string (com malloc) resultante de aplicações sucessivas de 'f'.
### ft_strtrim 	
Aloca memória e retorna uma cópia de 's1' com os caracteres especificados em 'set' removidos do início e do final da string.
### ft_substr 
Aloca na memória e retorna uma substring da string 's'. A substring começa no índice 'start' e tem tamanho máximo 'len'

## Bonus Part / 9 funções	

### ft_lstadd_back 	
Adiciona o nó 'novo' no final da lista.
### ft_lstadd_front 
Adiciona um novo nó no inicio da lista. Caso exista um nó no inicio, adiciona como next do novo	
### ft_lstclear 
Exclui e libera o nó fornecido e todos os sucessores desse nó, usando a função 'del' e free. O ponteiro para a lista deve ser definido como NULL	
### ft_lstdelone 
Toma como parâmetro um nó e libera a memória do conteúdo do nó usando a  função 'del' fornecida como parâmetro e libera o nó. A memória de 'próximo' não deve ser liberada	
### ft_lstiter 	
Itera a lista 'lst' e aplica a função 'f' no conteúdo de cada nó.
### ft_lstlast 	
Retorna o último nó da lista
### ft_lstmap 	
lista 'lst' e aplica a função 'f' no conteúdo de cada nó. 
Cria uma nova lista resultante das aplicações da função 'f'. 
A função 'del' é usada para excluir o conteúdo de um nó, se necessário
### ft_lstnew 	
Adicionar um novo nó e inicializar next como null
### ft_lstsize 	
Conta o número de nós em uma lista