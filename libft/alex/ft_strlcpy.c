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

int ft_strlcpy(char *dest, char *src, int size)
{
    int i;
 
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

int main(void)
{
    int size = 5;
    char    src[] = "1234aa";
    char    dest[size];
    printf("version maison : %d\n",ft_strlcpy(dest, src, size));
   printf("%s\n", dest);

    int size2 = 5;
    char    src2[] = "1234aa";
    char    dest2[size];
    printf("version officiel : %ld\n",strlcpy(dest2, src2, size2));
    printf("%s\n", dest2);
    return (0);
}