/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:07:03 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/03 23:40:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t size)
{
    size_t i;
    unsigned char *s1;
    unsigned char *s2;
    
    s1 = (unsigned char *)dest;
    s2 = (unsigned char *)src;
    i = 0;
    while (i < size)
    {
        s1[i] = s2[i];
        i++;
    }
    return ((void *)dest);
}

// #include <stdio.h>


// int main(void)
// {
//     char dest[6] = "salut";
//     char dest2[6] = "salut";
//     char src[] = "def";
//     printf("maison : %s\n", ft_memcpy(dest, src, 3));
//     printf("officiel : %s\n", memcpy(dest2, src, 3));
// }