/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbocica <anbocica@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 17:48:14 by anbocica          #+#    #+#             */
/*   Updated: 2026/08/20 15:14:41 by anbocica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dest, void *src, size_t n)
{
    unsigned char *pointeur2;
    unsigned char *pointeur1;
    unsigned char *pointeur_temp;
    size_t i;
    void temp[n];

    i = 0;
    pointeur_temp = (unsigned char *) temp;
    pointeur1 = (unsigned char *) src;
    pointeur2 = (unsigned char *) dest;
    while (i < n)
    {
        pointeur_temp[i] = pointeur1[i];
        pointeur2[i] = pointeur_temp[i];
        i++;
    }
    return (pointeur2);
}

int main(void)
{
    int i = 0;
    char src[] = "abcdef";
    char dest[] = "ghijkl";
    printf("%p" ,ft_memmove(dest, src, 1));
    printf("\n");
    return 0;
}
// segfault probleme dans la taille du void *temp ligne 21