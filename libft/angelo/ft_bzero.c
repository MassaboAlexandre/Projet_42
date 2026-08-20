/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbocica <anbocica@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 16:46:46 by anbocica          #+#    #+#             */
/*   Updated: 2026/08/16 17:44:20 by anbocica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *pointeur;

    pointeur = (unsigned char *) s;
    i = 0;
    while (i < n)
    {
        pointeur[i] = '\0';
        i++;
    }
}

int main(void)
{
    int j = 0;
    char str[] = "Abcdefg";
    ft_bzero(str, 3);
    printf("s\n");
    // printf("%s", str);
    while (j < 7)
    {
        printf("%c\n", str[j]);
        j++;
    }
}
