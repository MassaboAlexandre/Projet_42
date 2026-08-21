/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 00:38:39 by marvin            #+#    #+#             */
/*   Updated: 2026/08/21 00:38:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char    *res;
    unsigned char    startt;

    i = 0;
    j = 0;
    startt = start;
    res = malloc(sizeof(char) * len);
    if (res == NULL)
        return (void *)0;
    while(s[i] && j < len)
    {
        if (s[i] == startt)
        {
            while(j < len)
            {
                res[j] = s[i];
                i++;
                j++;
            }
        }
        i++;
    }
    res[j] = '\0';
    return (res);
}

#include <stdio.h>

int main(void)
{
    char const  *s = "abcdefghij";
    unsigned int start = 'd';
    unsigned char startt = start;
    size_t len = 3;
    printf("s = %s start = %c len = %ld\n", s, startt, len);
    printf("res =  %s\n", ft_substr(s, start, len));
    return (0);
}