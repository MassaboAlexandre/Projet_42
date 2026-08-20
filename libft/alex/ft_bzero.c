/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 19:45:16 by marvin            #+#    #+#             */
/*   Updated: 2026/08/16 19:45:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    ft_bzero(void   *s, size_t n)
{
    size_t i;
    unsigned char    *pointer;
    pointer = (void *)s;

    i = 0;
    while (i < n)
    {
        pointer[i] = 0;
        i++;
    }
}

#include <strings.h>
#include <stdio.h>

int main (void)
{
    // version int
    printf(" int \n");
    int istr[] = {10, 33, 44, 55};
    int istr2[] = {10, 33, 44, 55};
    size_t n = 4 * 2; // il faut faire 4 * le nombre d'aguments qu'on souhaite
    int i = 0;
    int imax = 4;

    ft_bzero(istr, n);
    printf("version maison   : ");
    while (i <imax)
    {
        printf("%d; ", istr[i]);
        i++;
    }
    i = 0;
    bzero(istr2, n);
    printf("\nversion officiel : ");
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
    ft_bzero(cstr, m);
    printf("version maison   : ");
    while (i <imax)
    {
        printf("%c; ", cstr[i]);
        i++;
    }
    i = 0;
    bzero(cstr2, m);
    printf("\nversion officiel : ");
    while (i < imax)
    {
        printf("%c; ", cstr2[i]);
        i++;
    }
    printf("\n");
    return (0);
}