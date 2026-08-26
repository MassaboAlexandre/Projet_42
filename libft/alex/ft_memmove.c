/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 19:52:27 by marvin            #+#    #+#             */
/*   Updated: 2026/08/20 19:52:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memmove(void *destination, const void *source, size_t size)
{
   size_t i;
    unsigned char   *pointerd;
    unsigned char   *pointers;
    
    i = 0;
    pointerd = (void *)destination;
    pointers = (void *)source;
    if (size == 0)
        return ((void *)destination);
    if (pointerd > pointers)
    {
        i = size - 1;
        while(0 < i)
        {
            pointerd[i] = pointers[i];
            i--;
        }
        return ((void *)destination);
    }
    else
    while (i < size)
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
    size_t n = 4 * 2; // il faut faire 4 * le nombre d'aguments qu'on souhaite
    int isrc[] = {10, 0, 0, 66};
    // int idest[n];
    int isrc2[] = {10, 0, 0, 66};
    // int idest2[n];
    int i = 0;
    int imax = 4;

    // printf("version maison   : ");
    // printf("%p\n", ft_memmove(idest, isrc, n));
    // while (i <imax)
    // {
    //     printf("%d; ", idest[i]);
    //     i++;
    // }
    // i = 0;
    // printf("\nversion officiel : ");
    // printf("%p\n", memmove(idest2, isrc2, n));
    // while (i < imax)
    // {
    //     printf("%d; ", idest2[i]);
    //     i++;
    // }
    // i = 0;
    // imax = 0;

    // version src + 2
     printf("version maison   : ");
    printf("%p\n", ft_memmove(isrc + 2, isrc, n));
    while (i <imax)
    {
        printf("%d; ", isrc[i]);
        i++;
    }
    i = 0;
    printf("\nversion officiel : ");
    printf("%p\n", memmove(isrc2 + 2, isrc2, n));
    while (i < imax)
    {
        printf("%d; ", isrc2[i]);
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
    
    printf("version maison   : %p\n", ft_memmove(cdest, csrc, m));
    printf(" %s\n", cdest);
    printf("version officiel : %p\n", memmove(cdest2, csrc2, m));
    printf(" %s\n", cdest2);

    return (0);
}