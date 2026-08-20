/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:12:45 by marvin            #+#    #+#             */
/*   Updated: 2026/08/20 15:12:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrchr(const char *string, int searchedChar)
{
    int i;
    int detect;

    detect = 0;
    i = 0;
    while (string[i])
    {
        if (string[i] == searchedChar)
            detect = i;
        i++;
    }
    if (detect == 0)
        return (void *)0;
    return ((char *) &string[detect]);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    int searchedChar = 'A';
    const   char string[] = "zeererAzderAzr";
    printf("version maison : %s\n", ft_strrchr(string, searchedChar));
    printf("version officiel : %s\n", strrchr(string, searchedChar));
    return(0);
}