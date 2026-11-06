/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:26:44 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/06 14:40:16 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// #include <stdio.h>
#include "libft.h"

size_t ft_strlcat(char *restrict dest, const char *restrict src, size_t dests)
{
    size_t i;
    size_t y;
    size_t len;

    i = 0;
    y = 0;
    len = 0;

    while (dest[i])
        i++;
    len = i;
    while (src[y])
    {
        if (i < dests - 1 && dests != 0)
        {
            dest[i] = src[y];
            i++;
        }
        y++;
    }
    if (dests < len)
        dest[i] = 0;
    if (dests <= len)
        return (dests + y);
    return (y + len);
}

// int main(void)
// {
//     char s1[9] = "poupou";
//     char s2[4] = "yyy";
//     char s3[9] = "poupou";
//     printf("version maison : %d", ft_strlcat(s1, s2, 10));
//     printf("\n");
//     printf("la vrai %d", strlcat(s3, s2, 10));  
//     printf("\n");
// }