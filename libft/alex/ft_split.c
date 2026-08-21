/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 02:22:30 by marvin            #+#    #+#             */
/*   Updated: 2026/08/21 02:22:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_countword(char const *s, char c)
{
    int i;
    int nb;

    i = 0;
    nb = 0;
     while (s[i])
     {
        if(s[i] != c)
            nb++;
        while (s[i] != c && s[i + 1] != '\0')
            i++;
        i++;
     }
    return (nb);
}

char **ft_sizeword(char const *s, char c, int cw)
{
    int i;
    int nb;
    int sizeWord;
    char **res;

    i = 0;
    nb = 0;
    sizeWord = 0;
    res = malloc(sizeof(char *) * cw);
    while (nb < cw)
    {
        while (s[i] != c && s[i] != '\0')
        {
            i++;
            sizeWord++;
        }
        if(s[i - 1] != c)
        {
            res[nb] = malloc(sizeof(char) * sizeWord + 1);
            nb++;
            sizeWord = 0;
        }
        i++;
    }
    return (res);
}

char    **ft_split(char const *s, char c)
{
    int i;
    int j;
    char **res;
    int cw;
    int k;


    i = 0;
    k = 0;
    j = 0;
    cw = ft_countword(s, c);
    res = ft_sizeword(s, c, cw);
    while (i < cw)
    {
        while(s[j] == c && s[j])
            j++;
        while (s[j] != c && s[j])
        {
            res[i][k] = s[j];
            k++;
            j++;
        }
         res[i][k] = '\0';
        k = 0;
        i++;
    }
    return (res);
}

#include <stdio.h>

int main(void)
{
    int i = 0;
    char const s[] = "la----baraque";
    char c = '-';
    int cw = ft_countword(s, c);
    printf("%s\n", s);
    printf("cw :%d\n", cw);
    char **res;
    res = ft_split (s, c);
    while (i < cw)
    {
        printf("%s\n", res[i]);
        i++;
    }
    return(0);
}