/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 23:26:17 by marvin            #+#    #+#             */
/*   Updated: 2026/08/14 23:26:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlen(char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "123456789";
    printf("version maison : %ld\n", ft_strlen(str));
    printf("version officiel : %ld\n", strlen(str));
    return (0);
}