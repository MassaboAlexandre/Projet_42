/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:58:35 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/03 18:48:02 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *pointer, int value, size_t count)
{
    unsigned char *s;
    size_t i;

    s = (unsigned char *)pointer ;
    i = 0;
    while (i < count)
    {
        s[i] = (unsigned char)value;
        i++;
    }
    return (s);
}

// #include <stdio.h>

// int main(void)
// {
//     int i = 0;
//     // char pointer[5] = "test";
//     int pointer[5];
//      while (i < 5)
//     {
//         pointer[i] = 0;
//         i++;
//     }
//     printf("de base = ");
//     i = 0;
//     while (i < 5)
//     {
//         printf(" %d,", pointer[i]);
//         i++;
//     }
//     printf("\n");
//     printf("rep = %s \n", ft_memset(pointer, 65, 2));
//     return (0);
// }