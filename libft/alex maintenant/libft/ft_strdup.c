/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:30:21 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/03 23:21:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *src)
{
    unsigned int i;
    unsigned int j;
    char *dest;

    i = 0;
    j = 0;
    while (src[i])
        i++;
     dest = malloc (sizeof(char) *i + 1);
    if (dest == NULL)
	    return (NULL);
    while (j < i)
    {
        dest[j] = src[j];
        j++;
    }
    dest[j] = '\0';
    return (dest);
}