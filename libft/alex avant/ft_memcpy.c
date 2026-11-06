/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 18:30:38 by marvin            #+#    #+#             */
/*   Updated: 2026/08/20 18:30:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memcpy(void *restrict destination, const void *restrict source, size_t size)
{
    size_t i;
    unsigned char *pointerd;
    unsigned char *pointers;

    pointerd = (void *)destination;
    pointers = (void *)source;

    i = 0;
    while(i < size)
    {
        pointerd[i] = pointers[i];
        i++;
    }
    return ((void *)destination);
}

#include <string.h>
#include <stdio.h>

int main (void)
{
    // version int
    printf(" int \n");
    size_t n = 4 * 4; // il faut faire 4 * le nombre d'aguments qu'on souhaite
    int isrc[] = {10, 0, 0, 66};
    int idest[n];
    int isrc2[] = {10, 0, 0, 66};
    int idest2[n];
    int i = 0;
    int imax = 4;

    printf("version maison   : ");
    printf("%p\n", ft_memcpy(idest, isrc, n));
    while (i <imax)
    {
        printf("%d; ", idest[i]);
        i++;
    }
    i = 0;
    printf("\nversion officiel : ");
    printf("%p\n", memcpy(idest2, isrc2, n));
    while (i < imax)
    {
        printf("%d; ", idest2[i]);
        i++;
    }
    i = 0;
    imax = 0;

    // version char
    printf("\n char \n");
    size_t m = 5;
    char cdest[m];
    char csrc[] = "aezearazrr";
    char cdest2[m];
    char csrc2[] = "aezearazrr";
    
    printf("version maison   : %p\n", ft_memcpy(cdest, csrc, m));
    printf(" %s\n", cdest);
    printf("version officiel : %p\n", memcpy(cdest2, csrc2, m));
    printf(" %s\n", cdest2);

    return (0);
}