/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:11:51 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/04 11:16:05 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if(s[i] == (unsigned char)c)
            return((char *)&s[i]);
        i++;
    }
    if (c == 0)
        return ((char *)&s[i]);
    return (0);
}