/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 21:25:16 by marvin            #+#    #+#             */
/*   Updated: 2026/08/20 21:25:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft_h
#define libft_h

int ft_atoi(const char *str)
void    ft_bzero(void   *s, size_t n)
void    *ft_calloc(size_t elementcount, size_t elementsize)
int ft_isalnum(int c)
int ft_isalpha(int c)
int is_ascii(int c)
int is_digit(int c)
int ft_isprint(int c)
void    *ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
int ft_memcmp(const void *pointera, const void *pointerb, size_t size)
void    *ft_memcpy(void *restrict destination, const void *restrict source, size_t size)
void    *ft_memmove(void *destination, const void *source, size_t size)
void    *ft_memset(void *s, int value, size_t n)
char    *ft_strchr(const char *string, int searchedChar)
char    *ft_strdup(const char * source)
size_t ft_strlcat(char *dest, char *src, size_t sized)
size_t ft_strlcpy(char * restrict dest,const char * restrict src, size_t size)
size_t ft_strlen(const char *str)
int ft_strncmp(const char *first, const char *second, size_t length)
const char  *ft_strnstr(const char *fullString, const char *substring, size_t len)
char    *ft_strrchr(const char *string, int searchedChar)
int ft_tolower(int  c)
int ft_toupper(int  c)

#endif