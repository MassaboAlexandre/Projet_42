/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:14:39 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/06 15:08:18 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *res;
    size_t  len;

    if (!s1 || !s2)
        return (NULL);

    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    res = ft_calloc(len, sizeof(char));
    if (!res)
        return (NULL);

    ft_strlcpy(res, s1, len);
    ft_strlcat(res, s2, len);
    return (res);
}

