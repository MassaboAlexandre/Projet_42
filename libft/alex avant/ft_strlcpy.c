/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 00:21:38 by marvin            #+#    #+#             */
/*   Updated: 2026/08/15 00:21:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlcpy(char * restrict dest,const char * restrict src, size_t size)
{
    size_t i;
 
    i = 0;
    while (src[i])
    {
        if (i < size)
        {
            dest[i] = src[i];
        }
        i++;
    }
    dest[size - 1] = '\0';
    return (i);
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t size = 5;
   const char * src = "1234aa";
   char dest[size];
   printf("version maison : %ld\n",ft_strlcpy(dest, src, size));
   printf("%s\n", dest);

    // size_t size2 = 5;
    const char * src2 = "1234aa";
    char dest2[size];
    printf("version officiel : %ld\n",strlcpy(dest2, src2, size));
    printf("%s\n", dest2);
    return (0);
}