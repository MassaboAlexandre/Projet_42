/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 15:20:20 by marvin            #+#    #+#             */
/*   Updated: 2026/08/18 15:20:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *first, const char *second, size_t length)
{
    size_t i;

    i = 0;
    while (i < length)
    {
        if (first[i] != second[i])
            return (first[i] - second[i]);
        i++;
    }
    return (0);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    const char first[] = "AC";
    const char second[] = "AC";
    size_t length = 3;
    printf("version maison : %d\n", ft_strncmp(first, second, length));
    printf("version officiel : %d\n", strncmp(first, second, length));
}