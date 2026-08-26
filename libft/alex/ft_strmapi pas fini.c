/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 16:18:29 by marvin            #+#    #+#             */
/*   Updated: 2026/08/21 16:18:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char ft_test(unsigned int n, char c)
{
    c = n;
    return (c);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char    *res;

    i = 0;
    while (s[i])
        i++;
    res = malloc(sizeof(char) * i + 1);
    if (res == NULL)
        return (NULL);
    i = 0;
    while (s[i])
    {
        res[i] = s[i];
        i++;
    }
    i = 0;
    while (res[i])
    {
        res[i] = (*f)(unsigned int, res[i]);
        i++;
    }
    return (res);

}

#include <stdio.h>

int main (void)
{
    char const  *s = "abcdefg"; 
    unsigned int n = 32;
    printf("avant modif : %s\n", s);
    printf("après modif : %s\n", ft_strmapi(s, ft_test(n, char)));
    return (0);
}
