/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 01:17:27 by marvin            #+#    #+#             */
/*   Updated: 2026/08/21 01:17:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char    *res;

    i = 0;
    j = 0;
    while(s1[i])
        i++;
    while(s2[j])
        j++;
    res = malloc(sizeof(char) * i + j);
    i = 0;
    j = 0;
    while(s1[i] && s2[j])
    {
        while(s1[i])
        {
            res[i + j] = s1[i];
            i++;
        }
        while(s2[j])
        {
            res[i + j] = s2[j];
            j++;
        }
    }
    res[i + j] = '\0';
    return (res);
}

#include <stdio.h>

int main(void)
{
    char const  s1[] = "abcd";
    char const  s2[] = "efg";
    printf("s1 = %s s2 = %s\n", s1, s2);
    printf("res = %s\n", ft_strjoin(s1, s2));
    return(0);
}