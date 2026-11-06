/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:01:48 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/04 11:59:10 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *first, const char *second, size_t length)
{
    size_t i;

    i = 0;
    
    while (i < length && (first[i] != '\0' || second[i] != '\0'))
    {
        if (first[i] != second[i])
            return ((unsigned char)first[i] - (unsigned char)second[i]);
        i++;
    }
    return (0);
}

// #include "libft.h"
// #include <stdio.h>

// int main(void)
// {
//     printf("%d\n", ft_strncmp("1234", "1235", 3));
//     printf("%d\n", strncmp("1234", "1235", 3));
//     return (0);
// }