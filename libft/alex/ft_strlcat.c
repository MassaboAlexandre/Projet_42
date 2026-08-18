/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 01:06:38 by marvin            #+#    #+#             */
/*   Updated: 2026/08/15 01:06:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlcat(char *dest, char *src, size_t sized)
{
    size_t i;
    size_t j;
    size_t k;

    i = 0;
    j = 0;
    k = 0;
    while (dest[i])
        i++;
    k = i;
    while (src[j])
    {
        if(i < sized - 1)
        {
            dest[i] = src[j];
            i++;
        }
        j++;
    }
    dest[k + i - 1] = '\0';
    return (j + k);
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char bdest[] = "545";  // pour changer dest et dest2
    char src[] = "98765";    //pour changer seulement src
    size_t sized = 8;           // pour changer seulement size
    char    *dest;
    dest = malloc(sizeof(char) * (sized + 1));
    int i = 0;
    while (bdest[i])
    {
        dest[i] = bdest[i];
        i++;
    }
    printf("version maison : %ld\n", ft_strlcat(dest, src, sized));
    printf("%s\n", dest);

    char src2[] = "98765";  //pour changer seulement src2
    char    *dest2;
    dest2 = malloc(sizeof(char) * (sized + 1));
    i = 0;
    while (bdest[i])
    {
        dest2[i] = bdest[i];
        i++;
    }
    printf("version officiel : %ld\n", strlcat(dest2, src2, sized));
    printf("%s\n", dest2);
    return (0);
}