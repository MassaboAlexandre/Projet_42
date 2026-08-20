/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 13:48:56 by marvin            #+#    #+#             */
/*   Updated: 2026/08/20 13:48:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strchr(const char *string, int searchedChar)
{
    int i;

    i = 0;
    while (string[i])
    {
        if(string[i] == searchedChar)
            return ((char *) &string[i]);
        i++;
    }
    return (void *)0;
}
#include <string.h>
#include <stdio.h>

int main(void)
{
    int searchedChar = 'A';
    const   char string[] = "zeererAzderzr";
    printf("version maison : %s\n", ft_strchr(string, searchedChar));
    printf("version officiel : %s\n", strchr(string, searchedChar));
    return(0);
}