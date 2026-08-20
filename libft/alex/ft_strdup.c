/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 22:18:34 by marvin            #+#    #+#             */
/*   Updated: 2026/08/20 22:18:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(const char * source)
{
    int i;
    char    *res;

    i = 0;
    while(source[i])
        i++;
    res = malloc(sizeof(char) * i + 1);
    i = 0;
    while(source[i])
    {
        res[i] = source[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *source = "abcdefgh";
    printf("version maison   : %s\n", ft_strdup(source));
    printf("version officiel : %s\n", strdup(source));
    return (0);
}