# **Libft - Sua Primeira Biblioteca**

## **Sumário**
1. [Introdução](#introdução)  
2. [Regras Gerais](#regras-gerais)  
3. [Parte Mandatória](#parte-mandatória)  
   - [Funções da LibC](#funções-da-libc)  
   - [Funções Adicionais](#funções-adicionais)  

---

## **Introdução**

Programar em **C** pode ser desafiador sem o suporte de funções padrão. Este projeto tem como objetivo ajudá-lo a:

- Compreender como as funções padrão funcionam.  
- Implementar essas funções do zero.  
- Criar uma biblioteca pessoal (`libft.a`) que servirá como uma base sólida para futuros projetos em **C**.  

Você poderá expandir sua biblioteca ao longo do ano e reutilizá-la em novos desafios.

---

## **Regras Gerais**

- O projeto deve ser escrito em **C**.  
- Código deve seguir a **Norma**. Violações resultarão em **0** no projeto.  
- Nenhuma memória alocada no heap pode ter vazamentos (leaks).
- Use Makefile para compilar os arquivos com as flags: -Wall -Wextra -Werror.
- Regras mínimas do Makefile:
   NAME
   all
   clean
  fclean
  re

## **Parte Mandatória**
Descrição
A biblioteca libft.a consiste em duas partes:

Funções da LibC: Reimplementação de funções padrão.
Funções Adicionais: Novas funções úteis para manipulação de strings e memória.
Funções da LibC

Funções de caracteres:
isalpha, isdigit, isalnum, isascii, isprint

Manipulação de strings e memória:
strlen, memset, bzero, memcpy, memmove, strlcpy, strlcat

Conversão de caracteres:
toupper, tolower

Localização de caracteres:
strchr, strrchr

Comparação e busca:
strncmp, memchr, memcmp, strnstr, atoi

Funções com alocação dinâmica:
calloc, strdup

## **Funções Adicionais**

| **Função**          | **Descrição**                                                   |
|----------------------|----------------------------------------------------------------|
| `ft_substr`         | Cria uma substring de uma string.                               |
| `ft_strjoin`        | Concatena duas strings em uma nova string.                      |
| `ft_strtrim`        | Remove caracteres específicos do início e fim de uma string.    |
| `ft_split`          | Divide uma string em substrings usando um delimitador.          |
| `ft_itoa`           | Converte um número inteiro em uma string.                       |
| `ft_strmapi`        | Aplica uma função a cada caractere de uma string e cria uma nova string. |
| `ft_striteri`       | Aplica uma função a cada caractere de uma string (por referência). |
| `ft_putchar_fd`     | Escreve um caractere em um file descriptor.                     |
| `ft_putstr_fd`      | Escreve uma string em um file descriptor.                       |
| `ft_putendl_fd`     | Escreve uma string seguida de uma nova linha em um file descriptor. |
| `ft_putnbr_fd`      | Escreve um número inteiro em um file descriptor.                |
