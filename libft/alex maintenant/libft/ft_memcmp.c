/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:25:51 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/04 10:17:29 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *so1;
    unsigned char *so2;
    size_t i;

    so1 = (unsigned char *)s1;
    so2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (so1[i] != so2[i])
            return (so1[i] - so2 [i]);
        i++;
    }
    return (0);
}