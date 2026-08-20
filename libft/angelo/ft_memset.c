/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbocica <anbocica@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 10:12:41 by anbocica          #+#    #+#             */
/*   Updated: 2026/08/15 10:12:41 by anbocica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *pointeur;
    pointeur = (unsigned char *) s;
    size_t i;

    i = 0;
    while (i < n)
    {
        pointeur[i] = c;
        i++;
    }
    return (s);
}

int main(void)
{
    char str[] = "aaaaaa";
    ft_memset(str, 65, 5);
    printf("%s", str);
}

/*
difference entre char str[] = "abcdef" et char *str = "abcdef"

*/