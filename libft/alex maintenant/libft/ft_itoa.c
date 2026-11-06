/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:39:43 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/06 15:12:49 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static char *intomodulo(int sign, int len_int, char *tab, long n)
{
    while (len_int >= sign)
    {
        tab[len_int] = (n % 10) + '0';
        n = n / 10;
        len_int--;
    }
    return (tab);
}

static int lenint(long j)
{
    int i;

    i = 0;
    while (j > 0)
    {
        j = j / 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    char    *tab;
    long    num;
    int     sign;
    int     len;

    num = n;
    sign = 0;
    if (n == 0)
        return (ft_strdup("0"));
    if (num < 0)
    {
        sign = 1;
        num *= -1;
    }
    len = lenint(num);
    tab = ft_calloc((len + sign + 1), sizeof(char));
    if (tab == NULL)
        return (NULL);
    tab[len + sign] = '\0';
    if (sign)
        tab[0] = '-';
    return (intomodulo(sign, len + sign - 1, tab, num));
}

// int main(void)
// {
//     int n = -0;
//     char *res;
    
//     res = ft_itoa(n);
//     printf("%s\n", res);
// }