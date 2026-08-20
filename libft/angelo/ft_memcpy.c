/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbocica <anbocica@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 17:48:14 by anbocica          #+#    #+#             */
/*   Updated: 2026/08/16 18:13:52 by anbocica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_memcpy(void *dest, void *src, size_t n)
{
    unsigned char *pointeur2;
    unsigned char *pointeur1;
    size_t i;

    i = 0;
    pointeur1 = (unsigned char *) src;
    pointeur2 = (unsigned char *) dest;
    while (i < n)
    {
        pointeur2[i] = pointeur1[i];
        i++;
    }
}

int main(void)
{
    int i = 0;
    char src[] = "abc";
    char dest[] = "def";
    ft_memcpy(dest, src, 3);
    while (i < 5)
    {
        printf("%c\n", dest[i]);
        i++;
    }
    printf("\n");
    return 0;
}
