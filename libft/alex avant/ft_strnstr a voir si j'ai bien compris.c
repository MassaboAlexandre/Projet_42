/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:25:16 by marvin            #+#    #+#             */
/*   Updated: 2026/08/20 15:25:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

const char  *ft_strnstr(const char *fullString, const char *substring, size_t len)
{
    size_t i;
    size_t j;
    size_t detect;

    i = 0;
    j = 0;
    detect = 0;
    while(i < len)
    {
        if(fullString[i] == substring[j])
        {
            while (substring[j])
            {
                if (fullString[i] != substring[j])
                    detect++;
                j++;
                i++;
            }
            i -= j;
            if (detect == 0)
                return ((char *) &fullString[i]);
        }
        detect = 0;
        j = 0;
        i++;
    }
    return (void *)0;
}

#include <string.h>
#include <stdio.h>

int main (void)
{
    const   char *fullString = "ef5zABABCeayt65fyaaABCe442222";
    const   char *substring = "ABC";
    size_t len = 23;

    printf("version maison : %s\n", ft_strnstr(fullString, substring, len));
    printf("version officiel : %s\n", strstr(fullString, substring));
    return (0);
}