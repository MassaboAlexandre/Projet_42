/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 20:58:07 by marvin            #+#    #+#             */
/*   Updated: 2026/08/16 20:58:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memset(void *s, int value, size_t n)
{
    size_t i = 0;
    unsigned    char *pointer;
    pointer = (void *)s;

    while (i < n)
    {
        pointer[i] = value;
        i++;
    }
    return ((void *)s);
}

#include <string.h>
#include <stdio.h>

int main (void)
{
    // version int
    printf(" int \n");
    int istr[] = {10, 33, 44, 55};
    int istr2[] = {10, 33, 44, 55};
    int value = 65;
    size_t n = 4 * 2; // il faut faire 4 * le nombre d'aguments qu'on souhaite
    int i = 0;
    int imax = 4;

    printf("version maison   : ");
    printf("%p\n", ft_memset(istr, value, n));
    while (i <imax)
    {
        printf("%d; ", istr[i]);
        i++;
    }
    i = 0;
    printf("\nversion officiel : ");
    printf("%p\n", memset(istr2, value, n));
    while (i < imax)
    {
        printf("%d; ", istr2[i]);
        i++;
    }
    i = 0;
    imax = 0;

    // version char
    printf("\n char \n");
    char cstr[] = "aezearazrr";
    char cstr2[] = "aezearazrr";
    size_t m = 5;
    
    while (cstr[imax])
        imax++;
    printf("version maison   : ");
    printf("%p\n", ft_memset(cstr, value, m));
    while (i <imax)
    {
        printf("%c; ", cstr[i]);
        i++;
    }
    i = 0;
    printf("\nversion officiel : ");
    printf("%p\n", memset(cstr2, value, m));
    while (i < imax)
    {
        printf("%c; ", cstr2[i]);
        i++;
    }
    printf("\n");
    return (0);
}