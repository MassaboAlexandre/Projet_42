/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 18:01:28 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/06 14:18:13 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdint.h>

int ft_atoi(const char *nptr);
void    ft_bzero(void *pointer, size_t n);
void    *ft_calloc(size_t count, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void    *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t size);
void    *ft_memmove(void *dest, const void *src, size_t size);
void    *ft_memset(void *pointer, int value, size_t count);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *src);
char    *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dest, const char *src, size_t dests);
size_t ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *first, const char *second, size_t length);
char *ft_strnstr(const char *big, const char *little, size_t n);
char    *ft_strrchr(const char *s, int c);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int character);
int ft_toupper(int character);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

# endif