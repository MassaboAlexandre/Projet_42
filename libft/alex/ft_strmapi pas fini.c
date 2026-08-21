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

int test_isalpha(int c)
{
  
    if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
            return(0);
    else 
        return (1);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
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
    char const  *s = ""; 
    printf("avant modif : %s\n", s);
    printf("après modif : %s\n", ft_strmapi(s, test_isalpha(int c)));
}